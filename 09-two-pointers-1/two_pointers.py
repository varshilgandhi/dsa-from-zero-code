# DSA from Zero #9 - two pointers, part 1: sorted two sum, then remove repeats in place.

def sorted_two_sum(a, target):
    l, r = 0, len(a) - 1
    while l < r:
        total = a[l] + a[r]
        if total == target:
            return a[l], a[r]
        if total < target:
            l += 1          # too small: left finger moves up
        else:
            r -= 1          # too big: right finger moves down
    return None

def remove_repeats(a):
    """In place: returns how many numbers are kept; a[:k] holds them."""
    if not a:
        return 0
    write = 1
    for read in range(1, len(a)):
        if a[read] != a[write - 1]:     # a new number
            a[write] = a[read]
            write += 1
    return write

print(sorted_two_sum([10, 20, 35, 50, 65, 80], 85))   # (20, 65)
a = [1, 1, 2, 3, 3, 3, 4]
k = remove_repeats(a)
print(k, a[:k])                                      # 4 [1, 2, 3, 4]

# Today's task
print(sorted_two_sum([5, 15, 25, 40, 60], 55))       # (15, 40)
