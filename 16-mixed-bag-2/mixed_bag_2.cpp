// DSA from Zero #16 - Mixed bag #2 (answers on small examples).   g++ -std=c++17 mixed_bag_2.cpp -o mb2 && ./mb2
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    // Q1 hashing
    unordered_set<int> seen; vector<int> a = {8, 3, 11, 5};
    for (int x : a) { if (seen.count(16 - x)) { cout << 16 - x << " " << x << "\n"; break; } seen.insert(x); }   // 11 5
    // Q2 two pointers
    vector<int> b = {1, 4, 6, 9, 12}; int l = 0, r = 4;
    while (l < r) { int s = b[l] + b[r]; if (s == 15) { cout << b[l] << " " << b[r] << "\n"; break; } if (s < 15) l++; else r--; }   // 6 9
    // Q3 fixed window
    vector<int> c = {2, 9, 4, 7, 1, 8, 6, 3}; int w = 0; for (int i = 0; i < 7; i++) w += c[i]; int best = w;
    for (int i = 7; i < (int)c.size(); i++) { w += c[i] - c[i - 7]; best = max(best, w); }
    cout << best << "\n";   // 38
    // Q4 prefix sums
    vector<int> d = {5, 3, 8, 2, 6, 4}; vector<int> P = {0}; for (int x : d) P.push_back(P.back() + x);
    cout << P[4] - P[1] << " " << P[6] - P[0] << "\n";   // 13 28
    // Q5 grow-and-shrink window
    string s = "CAKEBAKE"; unordered_set<char> in; int left = 0, longest = 0;
    for (int right = 0; right < (int)s.size(); right++) { while (in.count(s[right])) in.erase(s[left++]); in.insert(s[right]); longest = max(longest, right - left + 1); }
    cout << longest << "\n";   // 5
}
