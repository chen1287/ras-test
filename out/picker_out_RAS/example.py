from UT_RAS import *

if __name__ == "__main__":
    dut = DUTRAS("libDPIRAS.so")
    # dut.init_clock("clk")

    dut.Step(1)

    dut.finalize()