// DSA from Zero #4 - count steps, not seconds.   g++ -std=c++17 big_o.cpp -o big_o && ./big_o
#include <iostream>
#include <vector>
using namespace std;

long long one_by_one(const vector<int>& a, int target) {        // O(n)
    long long steps = 0;
    for (int x : a) { steps++; if (x == target) break; }
    return steps;
}

long long binary_search_steps(const vector<int>& a, int target) {   // O(log n), a sorted
    int lo = 0, hi = (int)a.size() - 1; long long steps = 0;
    while (lo <= hi) {
        steps++;
        int mid = (lo + hi) / 2;
        if (a[mid] == target) break;
        if (a[mid] < target) lo = mid + 1; else hi = mid - 1;
    }
    return steps;
}

long long every_pair(const vector<int>& a) {                   // O(n^2)
    long long steps = 0;
    for (size_t i = 0; i < a.size(); i++)
        for (size_t j = 0; j < a.size(); j++) steps++;
    return steps;
}

int main() {
    for (int n : {8, 1000, 1000000}) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) a[i] = i;
        cout << n << " " << one_by_one(a, n) << " " << binary_search_steps(a, n) << " ";
        if (n <= 1000) cout << every_pair(a) << "\n"; else cout << "too slow to run\n";
    }
    // 8 8 4 64
    // 1000 1000 10 1000000
    // 1000000 1000000 20 too slow to run
}
