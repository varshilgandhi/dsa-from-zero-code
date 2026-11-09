# DSA from Zero #18 - recursion is a new copy on a new plate, not a loop.

def countdown(n):
    if n == 0:
        print("go")
        return
    print(n)            # this copy's own n
    countdown(n - 1)    # a new plate with a new n

def total(a):
    if not a:           # empty list: stop
        return 0
    return a[0] + total(a[1:])   # trust the smaller copy

countdown(3)            # 3 2 1 go  (one per line)
print(total([3, 8, 12]))  # 23

# Today's task
print(total([5, 1, 4]))   # 10
