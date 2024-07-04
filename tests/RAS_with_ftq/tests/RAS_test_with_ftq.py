import mlvp
import logging

import os
os.sys.path.append(os.path.dirname(os.path.abspath(__file__)) + "/..")

from env.bundle import *
from env.bpu_top import *
from env.config import *

os.sys.path.append(DUT_PATH)

from UT_RAS import *

import mlvp.funcov as fc
from mlvp.reporter import *

import logging

class RAS(DUTRAS):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    def finalize(self):
        super().finalize()


async def ras_test(DUTRAS):
    ras_in = RASIn.from_prefix("io_in_").set_name("ras_in").bind(DUTRAS)
    ras_out = BranchPredictionResp.from_prefix("io_out_").set_name("ras_out").bind(DUTRAS)
    ras_update = UpdateBundle.from_prefix("io_update_").set_name("ras_update").bind(DUTRAS)
    pipeline_ctrl = PipelineCtrlBundle.from_prefix("io_").set_name("pipeline_ctrl").bind(DUTRAS)
    enable_ctrl = EnableCtrlBundle.from_prefix("io_ctrl_").set_name("enable_ctrl").bind(DUTRAS)
    ras_redirect = RASRediret.from_prefix("io_redirect_").set_name("ras_redirect").bind(DUTRAS)

    mlvp.create_task(mlvp.start_clock(DUTRAS))
    mlvp.create_task(BPUTop(DUTRAS, ras_in, ras_out, ras_update, pipeline_ctrl, enable_ctrl, ras_redirect).run())
    await ClockCycles(DUTRAS, MAX_CYCLE)
    # await ClockCycles(RAS, 5)

if __name__ == "__main__":
    ras = RAS(
        waveform_filename="report/ras_with_ftq.vcd", 
        coverage_filename="report/ras_with_ftq_coverage.dat"
                )
    
    ras.init_clock("clock")
    mlvp.run(ras_test(ras))
    ras.finalize()

    