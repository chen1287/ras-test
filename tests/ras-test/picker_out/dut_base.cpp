#include "dut_base.hpp"
#include "xspcomm/xutil.h"

DutBase::DutBase()
{
    cycle = 0;
    argc  = 0;
    argv  = nullptr;
}

#if defined(USE_VCS)
#include "vc_hdrs.h"
DutVcsBase::DutVcsBase()
{
    // FATAL("VCS does not support no-args constructor");
    exit(-1);
}

DutVcsBase::DutVcsBase(char *filename)
{
    char *name = (char *)malloc(strlen(filename) + 1);
    strcpy(name, filename);
    char *argv[] = {name};
    this->init(1, argv);
};

DutVcsBase::DutVcsBase(char *filename, int argc, char **argv)
{
    char *name = (char *)malloc(strlen(filename) + 1);
    strcpy(name, filename);
    argv[0] = name;
    this->init(argc, argv);
};

DutVcsBase::DutVcsBase(std::initializer_list<const char *> args)
{
    int argc    = args.size();
    // Reserve heap space for VCS overflow ?
    char **argv = (char **)malloc(sizeof(char *) * (argc+128));
    memset(argv, -1, sizeof(char *) * (argc+128));
    int i       = 0;
    for (auto arg : args) {
        char *name = (char *)malloc(strlen(arg) + 1);
        strcpy(name, arg);
        argv[i++] = name;
    }
    this->init(argc, argv);
};

DutVcsBase::DutVcsBase(int argc, char **argv)
{
    // save argc and argv for debug
    this->argc = argc;
    this->argv = argv;
    this->init(argc, argv);
};

void DutVcsBase::init(int argc, char **argv)
{
    // initialize VCS context
    VcsMain(argc, argv);

    // set VCS cycle to 0
    VcsInit();
    svSetScope(svGetScopeFromName("RAS_top"));

    // set cycle pointer to 0
    this->cycle    = 0;
    this->cycle_hl = 0;
    this->vcs_clock_period[0] = 5000;
    this->vcs_clock_period[1] = 5000;
    this->vcs_clock_period[2] = 5000 + 5000;
}

DutVcsBase::~DutVcsBase(){};

int DutVcsBase::step()
{
    return DutVcsBase::step(1, 1);
};

int DutVcsBase::step_nodump()
{
    assert(0);
    return 0;
};

int DutVcsBase::step(bool dump)
{
    return DutVcsBase::step(dump, dump);
};

int DutVcsBase::step(uint64_t ncycle, bool dump)
{
    if (!dump) {
        assert(ncycle == 0);
        VcsSimUntil(&cycle);
        return 0;
    }

    // set cycle pointer
    cycle_hl += ncycle;
    if (likely(ncycle == 1))
        cycle += vcs_clock_period[cycle_hl & 1];
    else
        cycle += (ncycle >> 1) * vcs_clock_period[2]
                 + (ncycle & 1) * vcs_clock_period[cycle_hl & 1];

    // run simulation
    VcsSimUntil(&cycle);
    return 0;
};

int DutVcsBase::finalize()
{
    // finalize VCS context
    return 0;
};

#endif

#if defined(USE_VERILATOR)
#include "verilated.h"
#include "VRAS.h"
#include "VRAS__Dpi.h"
#if defined(VL_TRACE)
#include "VRAS___024root.h"
#include "VRAS__Syms.h"
#endif

DutVerilatorBase::DutVerilatorBase()
{
    this->init(0, nullptr);
}

DutVerilatorBase::DutVerilatorBase(char *filename)
{
    char *name = (char *)malloc(strlen(filename) + 1);
    strcpy(name, filename);
    char *argv[] = {name};
    this->init(1, argv);
};

DutVerilatorBase::DutVerilatorBase(char *filename, int argc, char **argv)
{
    char *name = (char *)malloc(strlen(filename) + 1);
    strcpy(name, filename);
    argv[0] = name;
    this->init(argc, argv);
};

DutVerilatorBase::DutVerilatorBase(std::initializer_list<const char *> args)
{
    int argc    = args.size();
    char **argv = (char **)malloc(sizeof(char *) * argc);
    int i       = 0;
    for (auto arg : args) {
        char *name = (char *)malloc(strlen(arg) + 1);
        strcpy(name, arg);
        argv[i++] = name;
    }
    this->init(argc, argv);
};

DutVerilatorBase::DutVerilatorBase(int argc, char **argv)
{
    // save argc and argv for debug
    this->argc = argc;
    this->argv = argv;
    this->init(argc, argv);
};

void DutVerilatorBase::init(int argc, char **argv)
{
    // save argc and argv for debug
    this->argc = argc;
    this->argv = argv;

    // initialize Verilator context
    Verilated::commandArgs(argc, argv);

    // create top module
    VerilatedContext *contextp = new VerilatedContext;
    contextp->randReset(2);
    contextp->debug(0);
    contextp->commandArgs(argc, argv);
    this->top = new VRAS {contextp};

#if defined(VL_TRACE)
    contextp->traceEverOn(true);
#endif

    svSetScope(svGetScopeFromName("TOP.RAS_top"));

    // set cycle pointer to 0
    this->cycle = 0;
};

DutVerilatorBase::~DutVerilatorBase()
{
    // finalize Verilator context
    this->finalize();
};

int DutVerilatorBase::step()
{
    // push one more cycle
    return DutVerilatorBase::step(1, 1);
};

int DutVerilatorBase::step_nodump()
{
    return DutVerilatorBase::step(1, 0);
};

int DutVerilatorBase::step(bool dump)
{
    return DutVerilatorBase::step(1, dump);
};

int DutVerilatorBase::step(uint64_t ncycle, bool dump)
{
    // set cycle pointer
    this->cycle += ncycle;

    // run simulation
    if (dump) {
        for (int i = 0; i < ncycle; i++) {
            ((VRAS *)(this->top))->eval();
            ((VRAS *)(this->top))->contextp()->timeInc(1);
        }
    } else {
        assert(ncycle == 1);
        ((VRAS *)(this->top))->eval_step();
    }

    return 0;
};

int DutVerilatorBase::finalize()
{
    // finalize Verilator context
    if (this->top != nullptr) {
#if defined(VL_COVERAGE)
        VerilatedContext *contextp = ((VRAS *)(this->top))->contextp();
        if (this->coverage_file_path.size() > 0)
            contextp->coveragep()->write(this->coverage_file_path.c_str());
        else
            contextp->coveragep()->write("VRAS_coverage.dat");
#endif
        ((VRAS *)(this->top))->final();
        delete (VRAS *)(this->top);
        this->top = nullptr;
    }
    return 0;
};

void DutVerilatorBase::set_waveform(const char *filename)
{
#if defined(VL_TRACE)
    ((VRAS *)(this->top))->contextp()->dumpfile(filename);
    ((VRAS *)(this->top))->rootp->vlSymsp->_traceDumpOpen();
#else
    std::cerr << "Verilator waveform is not enabled";
    exit(-1);
#endif
};

void DutVerilatorBase::set_coverage(const char *filename)
{
#if defined(VL_COVERAGE)
    this->coverage_file_path = filename;
#else
    std::cerr << "Verilator coverage is not enabled";
    exit(-1);
#endif
};


#endif


#if defined(USE_VERILATOR)
DutUnifiedBase::DutUnifiedBase() : DutVerilatorBase() {};
DutUnifiedBase::DutUnifiedBase(int argc, char **argv) : DutVerilatorBase(argc, argv){};
DutUnifiedBase::DutUnifiedBase(char *filename) : DutVerilatorBase(filename) {};
DutUnifiedBase::DutUnifiedBase(char *filename, int argc, char **argv) : DutVerilatorBase(filename, argc, argv) {};
DutUnifiedBase::DutUnifiedBase(std::initializer_list<const char *> args) : DutVerilatorBase(args) {};
int DutUnifiedBase::finalize() {
    return DutVerilatorBase::finalize();
}
void DutUnifiedBase::set_waveform(const char *filename) {
    return DutVerilatorBase::set_waveform(filename);
}
void DutUnifiedBase::set_coverage(const char *filename) {
    return DutVerilatorBase::set_coverage(filename);
}
#elif defined(USE_VCS)
DutUnifiedBase::DutUnifiedBase() : DutVcsBase() {};
DutUnifiedBase::DutUnifiedBase(int argc, char **argv) : DutVcsBase(argc, argv){};
DutUnifiedBase::DutUnifiedBase(char *filename) : DutVcsBase(filename) {};
DutUnifiedBase::DutUnifiedBase(char *filename, int argc, char **argv) : DutVcsBase(filename, argc, argv) {};
DutUnifiedBase::DutUnifiedBase(std::initializer_list<const char *> args) : DutVcsBase(args) {};
int DutUnifiedBase::finalize() {
    return DutVcsBase::finalize();
}
void DutUnifiedBase::set_waveform(const char *filename) {
    return DutVcsBase::set_waveform(filename);
}
void DutUnifiedBase::set_coverage(const char *filename) {
    return DutVcsBase::set_coverage(filename);
}
#endif

DutUnifiedBase::~DutUnifiedBase()
{
    // finalize RAS
}
