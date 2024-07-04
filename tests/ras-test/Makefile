TOP_ENTRY := ../../rtl/RAS/RAS.v
TOP_FILES := ./RAS.txt
TL ?= python

ifneq ($(TARGET),)
	TARGET := $(TARGET)
else
	TARGET := ../../out/picker_out_RAS
endif

# if VERBOSE is set, then _VERBOSE is set to -v
ifneq ($(VERBOSE), false)
	_VERBOSE := --verbose
endif
_VERBOSE ?=
_WAVEFORM := -w RAS.fst

ras:
	@echo "Building tage module with parameters: "
	@echo "TL=${TL}"
	@echo "TOP_ENTRY=${TOP_ENTRY}"
	@echo "TOP_FILES=${TOP_FILES}"
	@echo "TARGET=${TARGET}"
	@echo "WAVEFORM=${_WAVEFORM}"
	@echo "VERBOSE=${_VERBOSE}"

	@mkdir -p ../../out
	rm -rf ${TARGET} 
	picker export ${TOP_ENTRY} --filelist ${TOP_FILES} --language ${TL} -c\
		 --target_dir ${TARGET} ${_WAVEFORM}  ${_VERBOSE} --internal internals.yaml -e
