all: compile
	@echo "--------------Comple Success Test Step DUT--------------------"
	@java -cp xspcomm-java.jar:${TARGET}.jar com.ut.example
	@echo "--------------------------------------------------------------"

compile:
	@cp /usr/local/share/picker/java/xspcomm-java.jar ./
	cmake . -Bbuild
	cmake --build build --config Debug --parallel `nproc`
	
clean:
	@rm -rf *.fst *.vcd *.fsdb *.log *.key
	@ls|grep -v ".jar"|grep -v "Makefile"|xargs rm -rf
