# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/local/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VRAS_USER_CFLAGS "-fPIC ")
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VRAS_USER_LDLIBS "-lz")

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VRAS_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(VRAS_COVERAGE 1)
# Threaded output mode?  0/1/N threads (from --threads)
set(VRAS_THREADS 0)
# Threaded tracing output mode?  0/1/N threads (from --trace-threads)
set(VRAS_TRACE_THREADS 0)
# Struct output mode?  0/1 (from --trace-structs)
set(VRAS_TRACE_STRUCTS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(VRAS_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(VRAS_TRACE_FST 1)

### Sources...
# Global classes, need linked once per executable
set(VRAS_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_dpi.cpp" "${VERILATOR_ROOT}/include/verilated_cov.cpp" "${VERILATOR_ROOT}/include/verilated_fst_c.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VRAS_CLASSES_SLOW "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__Slow.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__0__Slow.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__1__Slow.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__2__Slow.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__3__Slow.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__4__Slow.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_hca66eb25__0__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(VRAS_CLASSES_FAST "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS__Dpi_Export__0.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__0.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__1.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__2.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__3.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__4.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_h7a1922da__5.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS___024root__DepSet_hca66eb25__0.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VRAS_SUPPORT_SLOW "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS__Syms.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS__Trace__0__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(VRAS_SUPPORT_FAST "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS__Dpi.cpp" "/home/kurumi/ras-test/out/picker_out_RAS/build/DPIRAS/VRAS__Trace__0.cpp")
# All dependencies
set(VRAS_DEPS "/home/kurumi/ras-test/out/picker_out_RAS/RAS.v" "/home/kurumi/ras-test/out/picker_out_RAS/RAS_top.sv" "/home/kurumi/ras-test/tests/ras-test/../../rtl/RAS/RASStack.v" "/home/kurumi/ras-test/tests/ras-test/../../rtl/common/DelayN_1.v" "/home/kurumi/ras-test/tests/ras-test/../../rtl/common/DelayN_2.sv" "/home/kurumi/ras-test/tests/ras-test/../../rtl/common/ext_sram.v" "/usr/local/bin/verilator_bin")
# User .cpp files (from .cpp's on Verilator command line)
set(VRAS_USER_CLASSES )
