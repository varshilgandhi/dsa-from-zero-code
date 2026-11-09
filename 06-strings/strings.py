# DSA from Zero #6 - a string is an array of letters.

s = "NAMAN"
print(s[0], len(s), s[-1])      # N 5 N        index from 0; -1 = the last letter

# s[0] = "R"                    # TypeError: a Python string can't change
t = "R" + s[1:]                 # a change = a NEW string (new boxes): O(n)
print(t)                        # RAMAN

count = 0                       # one letter at a time: O(n)
for ch in s:
    if ch == "A":
        count += 1
print(count)                    # 2

def is_palindrome(word):
    """Two fingers: one at each end, both move inward. Returns (answer, comparisons)."""
    left, right, comparisons = 0, len(word) - 1, 0
    while left < right:
        comparisons += 1
        if word[left] != word[right]:
            return False, comparisons      # one pair differs: stop
        left += 1
        right -= 1
    return True, comparisons

print(is_palindrome("NAMAN"))   # (True, 2)
print(is_palindrome("LEVEL"))   # (True, 2)
print(is_palindrome("NAMIT"))   # (False, 1)
print(s == s[::-1])             # True         the short way: also O(n), but builds a reversed copy

# Today's task: check "racecar" on paper first. Then run:
print(is_palindrome("racecar")) # (True, 3)
