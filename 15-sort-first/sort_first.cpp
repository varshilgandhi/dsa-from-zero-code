// DSA from Zero #15 - sort first.   g++ -std=c++17 sort_first.cpp -o sf && ./sf
#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool is_anagram(string a, string b) { sort(a.begin(), a.end()); sort(b.begin(), b.end()); return a == b; }

vector<pair<int, int>> merge_meetings(vector<pair<int, int>> m) {
    sort(m.begin(), m.end());                       // by start time
    vector<pair<int, int>> out;
    for (auto [s, e] : m) {
        if (!out.empty() && s <= out.back().second) out.back().second = max(out.back().second, e);
        else out.push_back({s, e});
    }
    return out;
}

int main() {
    cout << (is_anagram("listen", "silent") ? "true" : "false") << "\n";   // true
    for (auto [s, e] : merge_meetings({{1, 3}, {8, 10}, {2, 6}, {15, 18}})) cout << s << "-" << e << " ";
    cout << "\n";                                                         // 1-6 8-10 15-18
    for (auto [s, e] : merge_meetings({{4, 6}, {1, 2}, {5, 8}, {10, 12}})) cout << s << "-" << e << " ";
    cout << "\n";                                                         // 1-2 4-8 10-12
}
