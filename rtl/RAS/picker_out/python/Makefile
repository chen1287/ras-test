all: compile
	@python3 __init__.py
	@echo "--------------Comple Success Test Step DUT--------------------"
	@cd ../ && python3 example.py || true
	@echo "--------------------------------------------------------------"

compile:
	@cp -r /usr/local/share/picker/python/xspcomm xspcomm
	cmake . -Bbuild
	cmake --build build --config Debug --parallel `nproc`
	@cp build/_${TARGET}.so .
	@cp build/lib${TARGET}.py .

clean:
	@rm -rf *.fst *.vcd *.fsdb *.log *.key
