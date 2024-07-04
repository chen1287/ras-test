#Makefile for RAS

export SIMULATOR = verilator
export TRACE := OFF
export PROJECT := RAS
export TARGET := UT_RAS
export VERBOSE := OFF
export EXAMPLE := ON
export TLANG := python
export SIMULATOR_FLAGS := 
export CFLAGS := 
export COVERAGE := OFF

all: release 

compile:
	cmake . -Bbuild -DSIMULATOR=$(SIMULATOR) -DTRACE=$(TRACE) -DPROJECT=$(PROJECT) \
		-DSIMULATOR_FLAGS=$(SIMULATOR_FLAGS) -DCFLAGS=$(CFLAGS) -DCOVERAGE=$(COVERAGE)
	cmake --build build --config Debug --parallel `nproc`

release: compile
	@cp -r build/${TARGET} .
	@cp dut_base.hpp ${TARGET}/dut_base.hpp
	@make -f mk/${TLANG}.mk

ifeq ($(VERBOSE), OFF) # if VERBOSE is OFF

ifeq ($(COVERAGE), OFF)
	@rm Makefile
	@rm *.v *.sv
endif

	@rm -rf build cmake cpp mk python CMakeLists.txt dut_base.*
	@rm -rf ${TARGET}.cpp
	@mv ${TARGET}/*.v ${TARGET}/*.sv . || true
endif

coverage:
ifeq ($(COVERAGE), ON)
ifeq ($(SIMULATOR), verilator)
	@rm -rf coverage/
	@verilator_coverage -write-info coverage.info ./V${PROJECT}_coverage.dat
	@genhtml coverage.info --output-directory coverage
else
# TODO: add vcs?
	@echo $(SIMULATOR) TBD
endif
else
	@echo coverage is not on
endif

clean: 