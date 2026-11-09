# DSA from Zero #19 - base case first. The 3-step recipe: base case, make it smaller, trust the copy.

def fact(n):
    if n == 1:          # base case
        return 1
    return n * fact(n - 1)

def power(x, k):
    if k == 0:          # base case: anything to the power 0 is 1
        return 1
    return x * power(x, k - 1)

def no_base(n):
    return n * no_base(n - 1)    # no base case: the plates never stop

print(fact(4))          # 24
print(power(2, 5))      # 32
try:
    no_base(4)
except RecursionError as e:
    print("RecursionError")      # RecursionError

# Today's task: sum of digits
def digits(n):
    if n < 10:          # base case: one digit
        return n
    return n % 10 + digits(n // 10)

print(digits(472))      # 13
