#include "UT_RAS.hpp"

int main()
{
#if defined(USE_VCS)
    UTRAS *dut = new UTRAS("libDPIRAS.so");
#elif defined(USE_VERILATOR)
    UTRAS *dut = new UTRAS();
#endif
    // dut->initClock(dut->clock);
    dut->xclk.Step(1);
    printf("Initialized UTRAS\n");
    delete dut;
    printf("Deleted UTRAS\n");
    return 0;
}