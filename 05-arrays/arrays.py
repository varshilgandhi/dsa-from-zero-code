# DSA from Zero #5 - an array is a shelf: boxes in one line, no gaps. Five jobs and their price.
import time

a = ["rice", "dal", "sugar", "tea", "oil"]
print(a[3])                 # tea            read by position: O(1)
print("sugar" in a)         # True           search, one by one: O(n)
a.append("salt")            #                add at the end: O(1) on average
a.insert(0, "atta")         #                add at the front: every item shifts, O(n)
print(a)                    # ['atta', 'rice', 'dal', 'sugar', 'tea', 'oil', 'salt']
a.pop(2)                    #                remove from the middle: everything after moves back, O(n)
print(a)                    # ['atta', 'rice', 'sugar', 'tea', 'oil', 'salt']
a.pop()                     #                remove the last: nothing moves, O(1)
print(a)                    # ['atta', 'rice', 'sugar', 'tea', 'oil']

# See the price yourself: 1 lakh adds at the end vs 1 lakh adds at the front.
n = 100000
t = time.time(); b = []
for i in range(n):
    b.append(i)
end_time = time.time() - t
t = time.time(); c = []
for i in range(n):
    c.insert(0, i)
front_time = time.time() - t
print("front is slower:", front_time > end_time)     # front is slower: True  (your seconds will differ)

# Today's task answers (try first!):  a[5] O(1),  a.append(9) O(1),  a.insert(0, 9) O(n),  "tea" in a O(n)
