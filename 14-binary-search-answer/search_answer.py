# DSA from Zero #14 - binary search on the answer: least pages per day to finish in D days.

def days_needed(pages, x):
    days, today = 1, 0
    for p in pages:
        if today + p > x:          # doesn't fit today: start the next day
            days += 1
            today = 0
        today += p
    return days

def least_per_day(pages, D):
    lo, hi, checks = max(pages), sum(pages), 0
    while lo < hi:
        mid = (lo + hi) // 2
        checks += 1
        if days_needed(pages, mid) <= D:
            hi = mid               # works: the answer is mid or less
        else:
            lo = mid + 1           # doesn't work: the answer is bigger
    return lo, checks

print(days_needed([10, 20, 30, 40], 60), days_needed([10, 20, 30, 40], 55))   # 2 3
print(least_per_day([10, 20, 30, 40], 2))                                     # (60, 6)

# Today's task
print(least_per_day([20, 10, 30, 10], 2))                                     # (40, 5)
