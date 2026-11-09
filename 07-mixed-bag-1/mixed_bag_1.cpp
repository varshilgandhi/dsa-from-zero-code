// DSA from Zero #7 - Mixed bag #1.   g++ -std=c++17 mixed_bag_1.cpp -o mb && ./mb
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Q1: binary search on 10 lakh sorted numbers: at most 20 steps
    vector<int> a(1000000);
    for (int i = 0; i < 1000000; i++) a[i] = i;
    int lo = 0, hi = 999999, steps = 0, target = 765432;
    while (lo <= hi) {
        steps++;
        int mid = (lo + hi) / 2;
        if (a[mid] == target) break;
        if (a[mid] < target) lo = mid + 1; else hi = mid - 1;
    }
    cout << (steps <= 20 ? "true" : "false") << "\n";     // true

    // Q2: careful, C++ COPIES on b = a. Use a reference to get "one list, two names".
    vector<int> x = {5, 6, 7};
    vector<int>& y = x;
    y.push_back(8);
    for (int v : x) cout << v << " ";
    cout << "\n";                                           // 5 6 7 8

    // Q4: loop inside a loop over 1,000 items
    long long count = 0;
    for (int i = 0; i < 1000; i++) for (int j = 0; j < 1000; j++) count++;
    cout << count << "\n";                                  // 1000000

    // Q5
    string s = "racecar";
    cout << s.front() << " " << s.back() << "\n";           // r r
}
