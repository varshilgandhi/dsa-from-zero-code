# DSA from Zero #4 - count steps, not seconds. The same three searches at n = 8, 1,000 and 10 lakh.

def one_by_one(a, target):          # O(n): look at every card
    steps = 0
    for x in a:
        steps += 1
        if x == target:
            break
    return steps

def binary_search(a, target):       # O(log n): throw away half each step (a must be sorted)
    lo, hi, steps = 0, len(a) - 1, 0
    while lo <= hi:
        steps += 1
        mid = (lo + hi) // 2
        if a[mid] == target:
            break
        if a[mid] < target:
            lo = mid + 1
        else:
            hi = mid - 1
    return steps

def every_pair(a):                  # O(n^2): a loop inside a loop
    steps = 0
    for x in a:
        for y in a:
            steps += 1
    return steps

for n in [8, 1000, 1000000]:
    a = list(range(n))
    target = n                      # not in the list: the worst case
    pairs = every_pair(a) if n <= 1000 else "too slow to run"
    print(n, one_by_one(a, target), binary_search(a, target), pairs)
# 8 8 4 64
# 1000 1000 10 1000000
# 1000000 1000000 20 too slow to run

# Today's task answers (try first!):  print(a[0]) -> O(1),  one loop -> O(n),  loop inside a loop -> O(n^2)
