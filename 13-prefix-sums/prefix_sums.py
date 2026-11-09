# DSA from Zero #13 - prefix sums: build once, then any range total is one subtraction.

def prefix(a):
    P = [0]
    for x in a:
        P.append(P[-1] + x)
    return P

def range_total(P, i, j):
    """Total of a[i..j], 0-based and inclusive."""
    return P[j + 1] - P[i]

sales = [5, 3, 8, 2, 6, 4]
P = prefix(sales)
print(P)                            # [0, 5, 8, 16, 18, 24, 28]
print(range_total(P, 1, 3))         # 13   day 2 to day 4
print(range_total(P, 2, 5))         # 20   day 3 to day 6

# Today's task
P2 = prefix([4, 1, 3, 7, 2])
print(P2, range_total(P2, 1, 3))    # [0, 4, 5, 8, 15, 17] 11
