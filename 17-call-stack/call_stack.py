# DSA from Zero #17 - the call stack: every call is a plate; last in, first out.
import sys

def a():
    print("a starts")
    b()                 # a pauses here; b's plate goes on top
    print("a ends")

def b():
    print("b starts")
    c()
    print("b ends")

def c():
    print("c")

a()
# a starts
# b starts
# c
# b ends
# a ends

print(sys.getrecursionlimit())   # 1000   about how many plates Python allows

# Today's task: draw the plates first, then run
def x(): print(1); y(); print(4)
def y(): print(2); z(); print(3)
def z(): print("z")
x()
# 1
# 2
# z
# 3
# 4
