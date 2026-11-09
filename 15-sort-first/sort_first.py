# DSA from Zero #15 - sorting first: anagrams and merging meetings.
from collections import defaultdict

def is_anagram(a, b):
    return sorted(a) == sorted(b)

def group_anagrams(words):
    groups = defaultdict(list)
    for w in words:
        groups["".join(sorted(w))].append(w)     # key = sorted letters
    return list(groups.values())

def merge(meetings):
    out = []
    for start, end in sorted(meetings):          # sort by start time
        if out and start <= out[-1][1]:          # overlaps the last one
            out[-1][1] = max(out[-1][1], end)
        else:
            out.append([start, end])
    return out

print(is_anagram("listen", "silent"))                    # True
print(group_anagrams(["listen", "silent", "enlist", "stone", "notes"]))
# [['listen', 'silent', 'enlist'], ['stone', 'notes']]
print(merge([(1, 3), (8, 10), (2, 6), (15, 18)]))        # [[1, 6], [8, 10], [15, 18]]

# Today's task
print(merge([(4, 6), (1, 2), (5, 8), (10, 12)]))         # [[1, 2], [4, 8], [10, 12]]
