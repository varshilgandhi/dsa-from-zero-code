# DSA from Zero #3 - names are slips that point to boxes.

x = 5
y = x          # y points to the same box as x
x = 10         # x now points to a NEW box; y's arrow did not move
print(y)       # 5

a = [3, 8, 12]
b = a          # copies the slip, not the row: one row, two names
b[0] = 99
print(a[0])    # 99

c = a.copy()   # a real copy: a new row
c[0] = 1
print(a[0], c[0])   # 99 1

# Today's task: draw it first, then run it.
a = [1, 2, 3]
b = a
b[1] = 50
print(a)       # [1, 50, 3]
