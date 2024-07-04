#coding=utf8

import copy
import random


# 0: no output
# 1: debug
# 2: info
# 3: warning
# 4: fatal

debug_level = 2

def warn(*args, **kwargs):
    if debug_level < 3:
        return
    args = list(args)
    args.insert(0, "WARNING:")
    print(*args, **kwargs)


def info(*args, **kwargs):
    if debug_level < 2:
        return
    args = list(args)
    args.insert(0, "INFO:")
    print(*args, **kwargs)

def debug(*args, **kwargs):
    if debug_level < 1:
        return
    args = list(args)
    args.insert(0, "DEBUG:")
    print(*args, **kwargs)


def fatal(*args, **kwargs):
    args = list(args)
    args.insert(0, "FATAL:")
    print(*args, **kwargs)
    exit(1)


class SpecStack(object):

    def reset(self):
        self.stack = [None for _ in range(self.max_size)]
        self.stack_base = 0
        self.stack_ltop = -1
        self.stack_point = 0

    def __init__(self, max_size=32):
        self.max_size = max_size
        self.reset()

    def push(self, value):
        # set new data
        pre_ltop = self.stack_ltop
        self.stack_ltop = self.stack_point
        self.stack[self.stack_ltop % self.max_size] = {"value": value, "parent": pre_ltop}
        # enlarge the stack
        self.stack_point += 1
        if self.overflow():
            warn("Spec RAS stack overflow, stack_base: %d, stack_point: %d" % (self.stack_base, self.stack_point))
            self.stack_base += 1
        assert self.empty() == False, "Spec RAS stack should not be empty after push"
        return self.stack_ltop
    
    def pop(self):
        if self.empty():
            warn("Spec RAS stack is empty")
            return None
        data = self.top()
        self.stack_ltop = data["parent"]
        return data["value"]
    
    def top(self):
        if self.empty():
            return None
        return self.stack[self.stack_ltop % self.max_size]
    
    def top_value(self):
        if self.empty():
            return None
        return copy.deepcopy(self.top())
    
    def overflow(self):
        return self.stack_point - self.stack_base > self.max_size
    
    def empty(self):
        assert self.stack_ltop < self.stack_point, "top should be less than point"
        return self.stack_ltop < self.stack_base
    
    def stack_size(self):
        if self.empty():
            return 0
        count = 0
        pos = self.stack_ltop
        while True:
            pos = self.stack[pos % self.max_size]["parent"]
            count += 1
            if pos < self.stack_base:
                break
        return count


class CommitStack(object):
    
        def reset(self):
            self.stack = [None for _ in range(self.max_size)]
            self.stack_base = 0
            self.stack_point = -1
    
        def __init__(self, max_size=32, max_counter=8):
            self.max_size = max_size
            self.max_counter = max_counter
            self.reset()
    
        def push(self, value):
            if not self.empty():
                data = self.top()
                if data["counter"] < self.max_counter and data["value"] == value:
                    data["counter"] += 1
                    return self.stack_point
            self.stack_point += 1
            self.stack[self.stack_point % self.max_size] = {"value": value, "counter": 1}
            if self.overflow():
                warn("Cmmt RAS stack overflow, stack_base: %d, stack_point: %d" % (self.stack_base, self.stack_point))
                self.stack_base += 1
            return self.stack_point
        
        def pop(self):
            if self.empty():
                warn("Cmmt RAS stack  is empty")
                return None
            data = self.top()
            data["counter"] -= 1
            value = data["value"]
            if data["counter"] <= 0:
                self.stack_point -= 1
            return value
        
        def top(self):
            if self.empty():
                return None
            return self.stack[self.stack_point % self.max_size]
        
        def top_value(self):
            if self.empty():
                return None
            return copy.deepcopy(self.top())
        
        def overflow(self):
            return self.stack_point - self.stack_base >= self.max_size
        
        def empty(self):
            return self.stack_point < self.stack_base
        
        def stack_size(self):
            if self.empty():
                return 0
            count = 0
            for i in range(self.stack_base, self.stack_point):
                count += self.stack[i % self.max_size]["counter"]
            return count


class RASRef(object):
    def __init__(self, spec_size=32, commit_size=16, max_counter=8):
        self.stack_spec = SpecStack(spec_size)
        self.stack_commit = CommitStack(commit_size, max_counter)
    
    def push(self, value):
        self.stack_spec.push(value)
        return value, (self.stack_spec.stack_base, self.stack_spec.stack_ltop, self.stack_spec.stack_point)
    
    def pop(self):
        if self.stack_spec.empty():
            value = self.stack_commit.pop()
        else:
            value = self.stack_spec.pop()
        return value, (self.stack_spec.stack_base, self.stack_spec.stack_ltop, self.stack_spec.stack_point)
    
    def commit_push(self, value):
        return self.stack_commit.push(value)
    
    def commit_pop(self):
        return self.stack_commit.pop()
    
    def redirect(self, value, meta, action=None):
        base, ltop, point = meta
        self.stack_spec.stack_base = base
        self.stack_spec.stack_ltop = ltop
        self.stack_spec.stack_point = point
        if action is None:
            return
        if str(action).lower == "push":
            return self.push(value)
        if str(action).lower == "pop":
            return self.pop()
        raise ValueError("action should be push or pop")


def test_simple_ras():
    spec = SpecStack()
    cmmt = CommitStack()
    for i in range(34):
        spec.push(i)
        cmmt.push(i)
    for i in range(33, 1, -1):
        assert spec.pop() == i
        assert cmmt.pop() == i
    assert spec.empty() == True, "Spec RAS stack should be empty"
    assert cmmt.empty() == True, "Commit RAS stack should be empty"
    info("Simple RAS test passed")


def test_random_stack_push_pop(stack):    
    pystack = []
    result_ras = []
    return_psk = []
    check_size = []
    for _ in range(100):
        for i in range(random.randint(100, 10000)):
            d = random.randint(0, 0xff)
            if random.randint(0, 100) < 50:
                pystack.append(d)
                stack.push(d)
            if random.randint(0, 100) < 50:
                if stack.empty():
                    assert result_ras == return_psk, "result should be equal: \nras:%s\npsk:%s" % (result_ras, return_psk)
                    if len(result_ras) > 0:
                        check_size.append(len(result_ras))
                    result_ras = []
                    return_psk = []
                    pystack = []
                else:
                    result_ras.append(stack.pop())
                    return_psk.append(pystack.pop())
        assert result_ras == return_psk, "result should be equal: \nras:%s\npsk:%s" % (result_ras, return_psk)
        if len(result_ras) > 0:
            check_size.append(len(result_ras))
    info("Random %s.stack push and pop test passed, average check size: %f" % (stack.__class__.__name__, sum(check_size) / len(check_size) if len(check_size) > 0 else 0))



if __name__ == "__main__":
    test_simple_ras()
    test_random_stack_push_pop(SpecStack())
    test_random_stack_push_pop(CommitStack())

