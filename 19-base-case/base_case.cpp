// DSA from Zero #19 - base case first.   g++ -std=c++17 base_case.cpp -o bc && ./bc
// (In C++ a missing base case crashes with a stack overflow instead of a clean error, so it is not run here.)
#include <iostream>
using namespace std;

long long fact(int n) { if (n == 1) return 1; return n * fact(n - 1); }
long long power(long long x, int k) { if (k == 0) return 1; return x * power(x, k - 1); }
int digits(int n) { if (n < 10) return n; return n % 10 + digits(n / 10); }

int main() {
    cout << fact(4) << " " << power(2, 5) << " " << digits(472) << "\n";   // 24 32 13
}
