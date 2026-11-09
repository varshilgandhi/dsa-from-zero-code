# DSA from Zero #7 - Mixed bag #1. Answer each on paper first, then run this to check.

# Q1: 10 lakh sorted roll numbers, find one. Binary search: at most 20 steps (O(log n)).
a = list(range(1000000))
lo, hi, steps, target = 0, len(a) - 1, 0, 765432
while lo <= hi:
    steps += 1
    mid = (lo + hi) // 2
    if a[mid] == target:
        break
    if a[mid] < target:
        lo = mid + 1
    else:
        hi = mid - 1
print(steps <= 20)              # True

# Q2: b = a copies the slip, not the list.
a = [5, 6, 7]
b = a
b.append(8)
print(a)                        # [5, 6, 7, 8]

# Q3: insert(0, x) shifts every item (O(n)); append(x) doesn't (O(1)). See 05-arrays for a timing.

# Q4: 1,000 names, each compared with every other: a loop inside a loop.
names = range(1000)
steps = 0
for x in names:
    for y in names:
        steps += 1
print(steps)                    # 1000000   = 10 lakh, O(n^2)

# Q5
s = "racecar"
print(s[0], s[-1])              # r r
