# DSA from Zero #12 - sliding window, grow and shrink: longest stretch with no repeated letter.

def longest_no_repeat(s):
    seen, left, best, best_at = set(), 0, 0, 0
    for right, ch in enumerate(s):
        while ch in seen:                  # the rule breaks: move the left edge
            seen.remove(s[left])
            left += 1
        seen.add(ch)
        if right - left + 1 > best:
            best, best_at = right - left + 1, left
    return best, s[best_at:best_at + best]

print(longest_no_repeat("CAKEBAKE"))       # (5, 'CAKEB')

# Today's task
print(longest_no_repeat("PAPAYA"))         # (3, 'PAY')
