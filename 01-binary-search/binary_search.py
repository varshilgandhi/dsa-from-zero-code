# DSA from Zero #1 - binary search on 8 cards.
# The 4 steps: 1. look at the middle  2. compare with what you want
#              3. throw away the half where it can't be  4. repeat until found, or nothing is left

def binary_search(cards, target):
    """Return (position, flips). position is -1 if target is not there. cards must be sorted."""
    lo, hi = 0, len(cards) - 1
    flips = 0
    while lo <= hi:                 # 4. repeat while something is left
        mid = (lo + hi) // 2        # 1. look at the middle
        flips += 1
        if cards[mid] == target:    # 2. compare
            return mid, flips
        if cards[mid] < target:     # 3. target is bigger: throw away the left half
            lo = mid + 1
        else:                       # 3. target is smaller: throw away the right half
            hi = mid - 1
    return -1, flips


if __name__ == "__main__":
    cards = [3, 8, 12, 19, 25, 31, 37, 44]
    print(binary_search(cards, 37))   # (6, 3): found at position 6 in 3 flips
    print(binary_search(cards, 30))   # (-1, 3): not there, known in 3 flips
    your_turn = [2, 5, 9, 14, 20, 27, 33, 40]
    print(binary_search(your_turn, 9))  # (2, 3)
