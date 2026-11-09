// DSA from Zero #18 - recursion: a new copy each call.   g++ -std=c++17 recursion_copies.cpp -o rc && ./rc
#include <iostream>
#include <vector>
using namespace std;

void countdown(int n) {
    if (n == 0) { cout << "go\n"; return; }
    cout << n << "\n";
    countdown(n - 1);
}

int total(const vector<int>& a, size_t i = 0) {   // total of a[i..]
    if (i == a.size()) return 0;
    return a[i] + total(a, i + 1);
}

int main() {
    countdown(3);                          // 3 2 1 go
    cout << total({3, 8, 12}) << "\n";     // 23
    cout << total({5, 1, 4}) << "\n";      // 10
}
