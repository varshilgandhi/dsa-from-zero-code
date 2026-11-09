# DSA from Zero #8 - hashing: remember what you've seen. Two sum in one pass with a set.

def two_sum(prices, target):
    seen = set()                          # the uncle's note
    for p in prices:
        if target - p in seen:            # "have I seen the rest?" one step on average
            return target - p, p
        seen.add(p)
    return None

print(two_sum([30, 55, 20, 70, 45, 80], 100))   # (30, 70)
print(30 in [30, 55, 20], 30 in {30, 55, 20})   # True True   (list: O(n), set: O(1) on average)

# Today's task: check your paper answer
print(two_sum([40, 25, 60, 75], 100))            # (40, 60)
