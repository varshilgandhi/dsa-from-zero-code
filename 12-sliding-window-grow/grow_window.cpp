// DSA from Zero #12 - grow-and-shrink window.   g++ -std=c++17 grow_window.cpp -o gw && ./gw
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int longest_no_repeat(const string& s) {
    unordered_set<char> seen;
    int left = 0, best = 0;
    for (int right = 0; right < (int)s.size(); right++) {
        while (seen.count(s[right])) seen.erase(s[left++]);
        seen.insert(s[right]);
        best = max(best, right - left + 1);
    }
    return best;
}

int main() {
    cout << longest_no_repeat("CAKEBAKE") << "\n";   // 5
    cout << longest_no_repeat("PAPAYA") << "\n";     // 3
}
