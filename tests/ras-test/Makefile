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
	_VERBOSE := -v
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
	picker ${TOP_ENTRY} -f ${TOP_FILES} -l ${TL} -c\
		 -t ${TARGET} ${_WAVEFORM}  ${_VERBOSE} --internal internals.yaml -e
