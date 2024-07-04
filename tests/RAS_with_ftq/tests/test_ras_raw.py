#coding=utf8

import sys
import os
import ras_bundle as p

import mlvp
import logging

os.sys.path.append(os.path.dirname(os.path.abspath(__file__)) + "/..")

from env.bundle import *
from env.bpu_top import *
from env.config import *

os.sys.path.append(DUT_PATH)

import UT_RAS as ras

import mlvp.funcov as fc
from mlvp.reporter import *

import logging

import random

def generate_random_number(digits):
    if digits <= 0:
        raise ValueError("Number of digits must be greater than zero.")
    
    # The range of the random number will be between 10^(digits-1) and (10^digits)-1
    lower_bound = 10**(digits - 1)
    upper_bound = (10**digits) - 1
    
    return random.randint(lower_bound, upper_bound)

def init_ras_pins():
    out_dir = os.path.join(os.path.dirname(__file__), "../../report")
    dut = ras.DUTRAS(waveform_filename=out_dir+"/RAS.vcd", coverage_filename=out_dir+"/RAS.dat")
    dut.init_clock("clock")
    return p.RAS_pins(dut)


def test_RAS_counter():
    ras_pins = init_ras_pins()
    dut = ras_pins.dut


    ras_pins.AddData([
        p.ras_reset_on(), p.ras_reset_off(), None, None,    # reset DUT
    ])
    dut.Step(1)
    # spec_push
    addr = 0x80000000
    for _ in range(4):
        ras_pins.AddData([
            p.spec_push(addr),                 # push addr
        ])
        addr = addr + 4
        dut.Step(2)

    addr = addr - 4
    ras_pins.AddData([
            p.spec_valid_zero(),                  
        ])

    # commit push

    ras_pins.AddData([
            p.commit_push(2,15)                                 # commit
        ])
    dut.Step(1)

    ras_pins.AddData([
            p.commit_push_zero()                               # commit
        ])
    # spec pop
    ras_pins.AddData([
        p.spec_pop(addr)
    ])
    dut.Step(1)
    ras_pins.AddData([
        p.spec_pop_zero()
    ])
    dut.Step(5)


    dut.finalize()

if __name__ == "__main__":
    test_RAS_counter()
