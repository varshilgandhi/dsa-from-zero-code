// DSA from Zero #11 - fixed sliding window.   g++ -std=c++17 fixed_window.cpp -o fw && ./fw
#include <iostream>
#include <vector>
using namespace std;

void best_k(const vector<int>& a, int k) {
    int window = 0;
    for (int i = 0; i < k; i++) window += a[i];
    int best = window, start = 0;
    for (int i = k; i < (int)a.size(); i++) {
        window += a[i] - a[i - k];
        if (window > best) { best = window; start = i - k + 1; }
    }
    cout << best << " from day " << start + 1 << "\n";
}

int main() {
    best_k({4, 2, 7, 1, 8, 3, 5}, 3);   // 16 from day 3
    best_k({3, 9, 2, 6, 5, 1}, 2);      // 12 from day 1
}
