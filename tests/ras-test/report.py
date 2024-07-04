def check_key_value_intersection(dict1, dict2):
    # 找到键的交集
    intersection_keys = set(dict1.keys()) & set(dict2.keys())
    
    # 存储不相等的键值对
    unequal_pairs = {}

    # 检查交集中的键对应的值是否相等
    for key in intersection_keys:
        if dict1[key] != dict2[key]:
            unequal_pairs[key] = {"dict1": dict1[key], "dict2": dict2[key]}

    if unequal_pairs:
        return False, unequal_pairs  # 返回False和不相等的键值对
    return True, intersection_keys  # 返回True和所有相等键的集合

def spec_is_full(dut):  # python里面的溢出判断，不用来作为功能点
    if dut.RAS_RASStack_TOSW_value.value == dut.RAS_RASStack_BOS_value.value:
        return True
    else:
        return False

def spec_is_empty(dut):  # python里面的empty，不用来作为功能点
    if dut.RAS_RASStack_TOSW_value.value == (dut.RAS_RASStack_TOSW_value.value + 1) % 32:
        return True
    else:
        return False



def spec_is_of(dut):  # spec溢出判断
    if dut.RAS_RASStack_spec_overflowed.value == 1:
        return True
    else:
        return False
    
def pop_in_of(ras):  # spec溢出判断
    for i in range(33, 0, -1):
        pop_value = ras.pop()
        if pop_value != 0x80000000 + i*4:
            return False
        return True

def spec_push_watch_point(dut): # push的触发点
    if dut.RAS_RASStack_io_spec_push_valid.value == 1:
        return True
    else:
        return False

def spec_count_watch_point(dut):    # sctr的触发点
    if dut.RAS_RASStack_TOSR_value.value == 0:
        return False
    else:
        return True

def sepc_pop_watch_point(dut):  # pop的触发点
    if dut.RAS_RASStack_io_spec_pop_valid.value == 1:
        return True
    else:
        return False

def spec_pop_with_of(dut):  # 溢出之后pop
    if dut.RAS_RASStack_spec_overflowed and dut.RAS_RASStack_io_spec_pop_valid.value:
        return True
    else:
        return False

def commit_push_with_spec_empty(dut): # 空栈 commit
    if dut.RAS_RASStack_io_commit_pop_valid.value and spec_is_empty(dut):
        return True
    else:
        return False

def commit_pop(dut):
    if dut.RAS_RASStack_io_commit_pop_valid.value:
        return True
    else:
        return False

def commit_push_with_spec_overflowed(dut): # 溢出commit
    if dut.RAS_RASStack_io_commit_push_valid.value and dut.RAS_RASStack_spec_overflowed:
        return True
    else:
        return False

def commit_pop_with_spec_overflowed(commit_addr, spec_addr): # 溢出commit pop
    if commit_addr == spec_addr:
        return True
    else:
        return False


def commit_push_same_addr(dut): # commit相同的地址
    if dut.RAS_RASStack_io_commit_push_valid.value and dut.RAS_RASStack_commit_stack_1_retAddr.value == 0:
        return True
    else:
        return False

def s3_redirect_singal(dut):
    if dut.RAS_redirect_next_valid_last_r:
        return True
    else:
        return False

#   reg         redirect_next_bits_r_cfiUpdate_pd_isRVC;	// @[utility/src/main/scala/utility/BitUtils.scala:33:27]
def redirect_isRVC(dut):
    if dut.RAS_redirect_next_valid_last_r and dut.RAS_redirect_next_bits_r_cfiUpdate_pd_isRVC:
        return True
    else:
        return False

#   reg         redirect_next_bits_r_cfiUpdate_pd_isCall;	// @[utility/src/main/scala/utility/BitUtils.scala:33:27]
def redirect_isCall(dut):
    if dut.RAS_redirect_next_valid_last_r and dut.RAS_redirect_next_bits_r_cfiUpdate_pd_isCall:
        return True
    else:
        return False
    
#   reg         redirect_next_bits_r_cfiUpdate_pd_isRet
def redirect_isRet(dut):
    if dut.RAS_redirect_next_valid_last_r and dut.RAS_redirect_next_bits_r_cfiUpdate_pd_isRet:
        return True
    else:
        return False

