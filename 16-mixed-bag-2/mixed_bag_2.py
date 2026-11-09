# DSA from Zero #16 - Mixed bag #2: the pattern behind each question, run on small examples.

def q1_two_sum_unsorted(a, t):            # hashing (episode 8)
    seen = set()
    for x in a:
        if t - x in seen:
            return t - x, x
        seen.add(x)

def q2_two_sum_sorted(a, t):              # two pointers (episode 9)
    l, r = 0, len(a) - 1
    while l < r:
        s = a[l] + a[r]
        if s == t: return a[l], a[r]
        if s < t: l += 1
        else: r -= 1

def q3_best_k(a, k):                      # fixed window (episode 11)
    w = best = sum(a[:k])
    for i in range(k, len(a)):
        w += a[i] - a[i - k]
        best = max(best, w)
    return best

def q4_range_totals(a, questions):        # prefix sums (episode 13)
    P = [0]
    for x in a: P.append(P[-1] + x)
    return [P[j + 1] - P[i] for i, j in questions]

def q5_longest(s):                        # grow-and-shrink window (episode 12)
    seen, left, best = set(), 0, 0
    for right, ch in enumerate(s):
        while ch in seen:
            seen.remove(s[left]); left += 1
        seen.add(ch)
        best = max(best, right - left + 1)
    return best

print(q1_two_sum_unsorted([8, 3, 11, 5], 16))           # (11, 5)
print(q2_two_sum_sorted([1, 4, 6, 9, 12], 15))          # (6, 9)
print(q3_best_k([2, 9, 4, 7, 1, 8, 6, 3], 7))           # 38
print(q4_range_totals([5, 3, 8, 2, 6, 4], [(1, 3), (0, 5)]))   # [13, 28]
print(q5_longest("CAKEBAKE"))                           # 5
