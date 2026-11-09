# DSA from Zero #11 - sliding window, fixed size: best total of k days in a row.

def best_k(a, k):
    window = sum(a[:k])
    best, start = window, 0
    for i in range(k, len(a)):
        window += a[i] - a[i - k]          # add the new day, subtract the old one
        if window > best:
            best, start = window, i - k + 1
    return best, start + 1                 # day numbers start at 1

print(best_k([4, 2, 7, 1, 8, 3, 5], 3))    # (16, 3)   days 3 to 5

# Today's task
print(best_k([3, 9, 2, 6, 5, 1], 2))       # (12, 1)
