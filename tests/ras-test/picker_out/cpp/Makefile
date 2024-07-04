all: compile
	@cp build/UTRAS_example .
	@rm -rf build
	@echo "--------------Comple Success Test Step DUT--------------------"
	@cd ../ && ./UT_RAS/UTRAS_example || true
	@echo "--------------------------------------------------------------"

compile:
	@cmake . -Bbuild
	@cmake --build build --config Release --parallel `nproc`

clean:
	@rm -rf *.fst *.vcd *.fsdb *.log *.key *.dat