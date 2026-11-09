# DSA from Zero #10 - two pointers, part 2: reverse in place, sorted squares.

def reverse_in_place(a):
    l, r = 0, len(a) - 1
    while l < r:
        a[l], a[r] = a[r], a[l]
        l += 1
        r -= 1
    return a

def sorted_squares(a):
    out = [0] * len(a)
    l, r = 0, len(a) - 1
    for pos in range(len(a) - 1, -1, -1):      # fill from the back
        if abs(a[l]) > abs(a[r]):
            out[pos] = a[l] * a[l]; l += 1
        else:
            out[pos] = a[r] * a[r]; r -= 1
    return out

print(reverse_in_place([3, 8, 12, 5, 9]))      # [9, 5, 12, 8, 3]
print(sorted_squares([-4, -1, 0, 3, 10]))      # [0, 1, 9, 16, 100]

# Today's task
print(sorted_squares([-7, -3, 2, 3, 11]))      # [4, 9, 9, 49, 121]
