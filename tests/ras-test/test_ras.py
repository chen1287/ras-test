#coding=utf8

import sys
import os
import ras_pins as p
import random
import mlvp.funcov as fc
from mlvp.reporter import set_func_coverage, set_line_coverage
import mlvp.reporter as rp
from report import *

sys.path.append(os.path.join(os.path.dirname(__file__), "../../out/picker_out_RAS"))
sys.path.append(os.path.join(os.path.dirname(__file__), "../../utils"))

import UT_RAS as ras

fail_count = 0
def Assert(c, msg):
    if not c:
        global fail_count
        fail_count += 1
        print("Assert failed: %s" % msg)
        return False
    return True


def init_ras_pins():
    out_dir = os.path.join(os.path.dirname(__file__), "../report")
    dut = ras.DUTRAS(waveform_filename=out_dir+"/RAS.fst", coverage_filename=out_dir+"/RAS.dat")
    dut.init_clock("clock")
    return p.RASPins(dut)



from ras_rm import RASRef
from BRTParser import BRTParser

# def test_ras_reference_model_with_trace(trace_file="microbench.bin"):
#     ras_ref = RASRef()
#     trace_data = os.path.join(os.path.dirname(__file__), "../../utils/ready-to-run", trace_file)
#     parser = BRTParser().fetch(trace_data)
#     count_success = 0
#     count_total = 0
#     count_commit = 0
#     count_redirect = 0
#     commit_queue = []
#     for data in parser:
#         if "CALL" in data["type"]:
#             off_set = 4
#             if "C." in data["type"]:
#                 off_set = 2
#             value = data["pc"] + off_set
#             push_pred = ras_ref.push(value)
#             commit_queue.append((True, True, push_pred))
#         elif "RET" in data["type"]:
#             value, meta = ras_ref.pop()
#             count_total += 1
#             hit = value == data["target"]
#             if hit:
#                 count_success += 1
#             commit_queue.append((hit, False, (value, meta))) 
#         # commit and redirect
#         pending_size = len(commit_queue)
#         for i in range(pending_size):
#             if random.random() < 0.5 and pending_size < 5:
#                 break
#             hit, is_push, (value, meta) = commit_queue.pop(0)
#             if hit:
#                 count_commit += 1
#                 if is_push:
#                     ras_ref.commit_push(value)
#                 else:
#                     ras_ref.commit_pop()
#             else:
#                 count_redirect += 1
#                 ras_ref.redirect(value, meta)

#     print("[%20s] RAS Reference Model: %d/%d passed, hit rate: %.4f %% (%d/%d c/r)"%(trace_file, count_success, count_total, count_success/count_total if count_total > 0 else 0.0, 
#                                                                                      count_commit, count_redirect))



def spec_count(ras):
    # create dut_pins
    ras.reset()
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())

    # set coverage
    g = fc.CovGroup("spec_count")
    # g.add_watch_point(ras.dut, {"TOSR=0": spec_count_watch_point}, name="spec_count")
    # ras.dut.xclock.StepRis(lambda _: g.sample())

    # test
    size = 8    #max sctr
    for i in range(size+1):
        print(0x80000000, "push>", ras.push(0x80000000 ), ras.empty())
        end_TOSR = ras.dut.RAS_RASStack_TOSR_value
    g.add_watch_point(end_TOSR , {"TOSR=0":fc.Eq(0) }, name="spec_count")
    g.sample()

    return g

def spec_push(ras):
    # create dut_pins
    ras.reset()
    g = fc.CovGroup("spec_push")
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())
    for i in range(32):
        watch_point_name = "spec_addr" + str(i)
        atter_name = f"RAS_RASStack_spec_queue_{i}_retAddr"
        addr_obj = getattr(ras.dut, atter_name)
        g.add_watch_point(addr_obj,{watch_point_name : fc.Eq(0x80000000 + i*4)}, name = watch_point_name)
    for i in range(32):
        ras.push(0x80000000 + i*4)
    ras.dut.xclock.StepRis(lambda _: g.sample())
    
    return g
        


def spec_pop(ras):
    # create dut_pins
    ras.reset()
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())

    # set coverage
    g = fc.CovGroup("spec_pop")
    g.add_watch_point(ras.dut, {"spec_of": spec_is_of}, name="spec_of")
    size = 32    #max sctr
    pop_addr = {}
    for i in range(size):
        pop_addr[i] = -1 
        watch_point_name = "pop_addr" + str(i)
        print(0x80000000, "push>", ras.push(0x80000000 + i*4 ), ras.empty())
        g.add_watch_point(pop_addr[i], {watch_point_name: lambda x: int(x) == 0x80000000 + i*4 }, name=watch_point_name)
        print("pop_addr{} == {}".format(i, hex(0x80000000+i*4)))

    # ras.dut.xclock.StepRis(lambda _: g.sample())
    g.sample()
    for i in range(size-1, -1, -1):
        pop_addr[i], _ = ras.pop()
        # 十六进制输出pop_addr[i]
        print(hex(pop_addr[i]))
    
    return g


def spec_pop_with_of(ras):
    # create dut_pins
    ras.reset()
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())

    # set coverage
    g = fc.CovGroup("spec_pop_with_of")
    g.add_watch_point(ras.dut, {"spec_of": spec_is_of}, name="spec_of")
    size = 32    #max sctr
    pop_addr = {}
    for i in range(size+1+1):
        pop_addr[i] = -1 
        watch_point_name = "pop_addr" + str(i)
        print(0x80000000, "push>", ras.push(0x80000000 + i*4 ), ras.empty())
        g.add_watch_point(pop_addr[i], {watch_point_name: lambda x: int(x) == 0x80000000 + i*4 }, name=watch_point_name)
    ras.dut.xclock.StepRis(lambda _: g.sample())

    for i in range(size+1, -1, -1):
        _, pop_addr[i] = ras.pop()

    return g

def commit_push_with_spec_empty(ras):
    # create dut_pins
    ras.reset()
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())

    # set coverage
    g = fc.CovGroup("commit_push_with_spec_empty")
    g.add_watch_point(ras.dut.RAS_RASStack_commit_stack_0_retAddr, 
    { "commit_push_with_spec_empty": fc.Ne(0x80000000),"commit_push_with_spec_empty": fc.Ne(0x00000000) }, name="commit_push_with_spec_empty")
    ras.dut.xclock.StepRis(lambda _: g.sample())
    _, meta = ras.push(0x80000000)
    ras.pop()
    # test
    ras.commit_push(meta)
    return g

def commit_push_with_spec_overflowed(ras):
    # create dut_pins
    ras.reset()
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())

    # set coverage
    g = fc.CovGroup("commit_push_with_spec_overflowed")
    g.add_watch_point(ras.dut.RAS_RASStack_spec_queue_0_retAddr, 
                       {"commit_push_with_spec_overflowed": fc.Eq(ras.dut.RAS_RASStack_commit_stack_0_retAddr.value)}, name="commit_push_with_spec_overflowed")
    ras.dut.xclock.StepRis(lambda _: g.sample())
    
    # test
    meta = {}
    for i in range(33):
        _, meta[i] = ras.push(0x80000000 + i*4)

    for i in range(33):
        ras.commit_push(meta[i])
    return g

def commit_pop(ras):   # commit_pop
    # create dut_pins
    ras.reset()
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())

    # set coverage
    commit_value = []
    g = fc.CovGroup("commit_pop")
    for i in range(6):
        commit_value.append(-1)
        g.add_watch_point(commit_value[i], 
                        {"commit_pop_" + str(i) + "_addr": lambda x : int(x) == 0x80000000 + i*4 }, name="commit_pop_" + str(i) + "_addr")
    ras.dut.xclock.StepRis(lambda _: g.sample())

    # test
    meta = {}
    for i in range(6):
        _,meta[i] = ras.push(0x80000000 + i*4 )
    for i in range(6):
        ras.commit_push(meta[i])
    for i in range(5, -1, -1):
         commit_value[i] = ras.commit_pop(meta[i])

    return g


def commit_push_same_addr(request):
    # create dut_pins

    ras_pins = init_ras_pins()
    ras_pins.reset()
    print("push>", ras_pins.out_last_stage_spec.as_dict(), ras_pins.empty())

    # set coverage
    g = fc.CovGroup("commit_push_same_addr")
    g.add_watch_point(ras_pins.dut.RAS_RASStack_commit_stack_1_retAddr, {"commit_push_same_addr": fc.Ne(0x80000000)}, 
                       name="commit_push_same_addr")
    ras_pins.dut.xclock.StepRis(lambda _: g.sample())
    
    # test
    maxctr = 8
    meta = {}
    for i in range(8):
        _,meta[i] = ras_pins.push(0x80000000)
    for i in range(8):
        ras_pins.commit_push(meta[i])
    ras_pins.dut.finalize()
    set_func_coverage(request, g)


def commit_pop_with_spec_overflowed(ras):   # commit_pop
    # create dut_pins
    ras.reset()
    print("push>", ras.out_last_stage_spec.as_dict(), ras.empty())

    # set coverage
    g = fc.CovGroup("commit_pop_with_spec_overflowed")

    # test
    meta = {}
    for i in range(33):
        _, meta[i] = ras.push(0x80000000 + i*4)
    for i in range(33):
        ras.commit_push(meta[i])
    for i in range(33):
        value_commit, _ = ras.commit_pop(meta[i])  
    g.add_watch_point(value_commit,
                      {"commit_pop_with_sepc_overflowed": lambda value_commit : value_commit == 0x80000000 + 32*4 }, name="commit_pop_with_spec_overflowed")
    ras.dut.xclock.StepRis(lambda _: g.sample())
    
    return g

def commit_pop_with_commit_overflowed(ras):   # commit_pop
    ras.reset()
    g = fc.CovGroup("commit_pop_with_spec_overflowed")

    # test
    meta = {}
    for i in range(17):
        _,meta[i] = ras.push(0x80000000 + i*4)
    for i in range(17):
        ras.pop()
    for i in range(17):
        ras.push(0x80000000 + i*4)

    value_commit, _ = ras.commit_pop(meta[0])   
    g.add_watch_point(value_commit, 
                        {"commit_pop_with_spec_overflowed":  lambda value_commit : value_commit == 0x80000000 + 17*4}, name="commit_pop_with_spec_overflowed")
    ras.dut.xclock.StepRis(lambda _: g.sample())

    return g

def s2_push_s3_keep(ras):
    ras.reset()
    g = fc.CovGroup("s2_push_s3_keep")
    # test
    
    ras.keep_after_push(0x80000000) # keep

    return g

def s2_keep_s3_pop(ras):
    ras.reset()
    g = fc.CovGroup("s2_keep_s3_pop")
    # test
    for i in range(30):
        ras.push(0x80000000 + i*4)  # push
    print(ras.pop_after_keep()) # keep

    return g

def s2_pop_s3_keep(ras):
    ras.reset()
    g = fc.CovGroup("s2_keep_s3_pop")
    # test
    for i in range(30):
        ras.push(0x80000000 + i*4)  # push
    ras.keep_after_pop() # s3_push

    return g


def s2_keep_s3_push(ras):
    ras.reset()
    g = fc.CovGroup("s2_keep_s3_pop")
    # test
    ras.push_after_keep(0x80000000) # s3_push

    return g

# redirect_push(self, pc, isRCV, meta)
def redirect_push(ras):
    ras.reset()
    g = fc.CovGroup("redirect_push")
    meta = {}
    for i in range(10):
        _, meta[i] = ras.push(0x80000000 + i*4)
    redirect_num = random.randint(0,9)
    ras.redirect_push(0x88888888, 0, meta[redirect_num])
    atter_name  = f"RAS_RASStack_spec_queue_{int (meta[redirect_num]['TOSR_value'])}_retAddr"
    spec_obj = getattr(ras.dut, atter_name)
    g.add_watch_point(spec_obj, 
                        {"redirect_push":  fc.Eq(0x88888888 + 2)}, name="redirect_push")
    return g

def redirect_pop(ras):
    ras.reset()
    g = fc.CovGroup("redirect_pop")
    meta = {}
    for i in range(10):
        _, meta[i] = ras.push(0x80000000 + i*4)
    redirect_num = random.randint(0,9)
    pop_value ,_ = ras.redirect_pop(meta[redirect_num])
    g.add_watch_point(pop_value, 
                        {"redirect_pop": lambda : pop_value == 0x80000000 + redirect_num*4}, name="redirect_pop")
    return g

def test_ras(request):
    ras_pins = init_ras_pins()
    ras_pins.reset()
    ras_pins.dut.Step(3)
    # print("push>", ras_pins.out_last_stage_spec.as_dict(), ras_pins.empty())
    # set coverage
    coverage_list = []
    #spec
    coverage_list = ras_pins.set_base_coverage()
    coverage_list.append(spec_push(ras_pins))
    coverage_list.append(spec_count(ras_pins))  # spec count
    coverage_list.append(spec_pop(ras_pins))
    coverage_list.append(spec_pop_with_of(ras_pins)) # spec pop with overflow

    # commit
    coverage_list.append(commit_push_with_spec_overflowed(ras_pins))  # commit push with overflow
    coverage_list.append(commit_push_with_spec_empty(ras_pins))
    coverage_list.append(commit_pop(ras_pins))
    coverage_list.append(commit_pop_with_commit_overflowed(ras_pins))
    coverage_list.append(commit_pop_with_spec_overflowed(ras_pins))

    # update
    coverage_list.append(s2_push_s3_keep(ras_pins))
    coverage_list.append(s2_keep_s3_pop(ras_pins))
    coverage_list.append(s2_pop_s3_keep(ras_pins))
    coverage_list.append(redirect_push(ras_pins))
    coverage_list.append(s2_keep_s3_push(ras_pins))

    # redirect
    coverage_list.append(redirect_push(ras_pins))
    coverage_list.append(redirect_pop(ras_pins))

    ras_pins.dut.finalize()
    set_func_coverage(request, coverage_list)
    set_line_coverage(request, "report/RAS.dat")


if __name__ == "__main__":
    ras_pins = init_ras_pins()
    ras_pins.reset()
    print("init:", ras_pins.out_last_stage_spec.as_dict(), ras_pins.empty())


    meta = {}
    for i in range(32):
        _, meta[i] = ras_pins.push(0x80000000)
    # for _ in range(50):
    #     ras_pins.pop()
    # bug 1
    # meta = {}
    # for i in range(30):
    #     _, meta[i] = ras_pins.push(0x80000000+i*4)
    # for _ in range(50):
    #     ras_pins.pop()
    # for _ in range(32):
    #     _, meta[i/4] = ras_pins.push(0x80000066)
    ras_pins.dut.Step(3)
    print(meta[6])
    # ras_pins.dut.io_redirect_bits_cfiUpdate_TOSR_value.value =  7
    print("{} is redirect_TOSR_value".format(ras_pins.dut.io_redirect_bits_cfiUpdate_TOSR_value.value))
    ras_pins.dut.io_redirect_bits_cfiUpdate_TOSR_value.value = meta[6]["TOSR_value"]
    # redirect_push(self, pc, isRCV, meta)
    ras_pins.redirect_push(0x88888888, 1, meta[6])
    print("{} is redirect_TOSR_value".format(ras_pins.dut.io_redirect_bits_cfiUpdate_TOSR_value.value))
    ras_pins.dut.Step(3)
    print(ras_pins.dut.io_out_last_stage_spec_info_NOS_value.value)
    for _ in range(30):
        ras_pins.pop()
    ras_pins.dut.Step(10)

    # bug 2
    # meta = {} # 记录每次的meta信息
    # for i in range(50):
    #     _, meta[i] = ras_pins.push(0x80000000 + i*4)

    # for i in range(7):
    #     print(meta[i])
    #     ras_pins.commit_push(meta[i])
    # ras_pins.dut.Step(5)

    # # bug 3 溢出的情况还是会出错
    # meta = {} # 记录每次的meta信息
    # for i in range(50):
    #     _, meta[i] = ras_pins.push(0x80000000 + i*4)

    # for i in range(7):
    #     ras_pins.commit_push(meta[i])

    # for _ in range(50):
    #     ras_pins.pop()

    # bug 4 第一次压栈还是出不去
    # meta = {}
    # for i in range(6):
    #     _, meta[i] = ras_pins.push(0x80000000 + i*4)
    # for i in range(6):
    #     ras_pins.commit_push(meta[i])
    
    # ras_pins.dut.Step(5)

    # bug 5
    # _, m1 = ras_pins.push(1)
    # _, m2 = ras_pins.push(2)
    # _, m3 = ras_pins.push(3)
    # _, m4 = ras_pins.push(5)
    # _, m5 = ras_pins.push(5)
    # _, m6 = ras_pins.push(5)
    # _, m7 = ras_pins.push(7)

    # ras_pins.commit_push(m1)
    # ras_pins.commit_push(m2)
    # ras_pins.commit_push(m3)
    # ras_pins.commit_push(m4)
    # ras_pins.commit_push(m5)
    # ras_pins.commit_push(m6)
    # print("pop 6", ras_pins.pop())
    # print("pop 5", ras_pins.pop())
    # print("pop 4", ras_pins.pop())
    # print("pop 3", ras_pins.pop())
    # ras_pins.commit_pop(m6)
    # ras_pins.commit_pop(m5)
    # ras_pins.commit_pop(m4)
    # ras_pins.commit_pop(m3)
    # ras_pins.commit_push(m7)

    # bug 6
    # _, m1 = ras_pins.push(1)
    # _, m2 = ras_pins.push(2)
    # _, m3 = ras_pins.push(3)
    # _, m4 = ras_pins.push(4)
    # _, m5 = ras_pins.push(5)

    # ras_pins.pop()
    # ras_pins.pop()
    # _, m6 = ras_pins.push(6)

    # ras_pins.commit_push(m1)
    # ras_pins.commit_push(m2)
    # ras_pins.commit_push(m3)
    # ras_pins.commit_push(m4)
    # ras_pins.commit_push(m5)

    # print("pop 6", ras_pins.pop())
    # print("pop 3", ras_pins.pop())
    # print("pop 2", ras_pins.pop())
    # print("pop 1", ras_pins.pop())

    # test redirect
    # _, m1 = ras_pins.push(1)
    # ras_pins.redirctRas(0x80000000, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1)
    # ras_pins.dut.Step(10)
    ras_pins.dut.finalize()
