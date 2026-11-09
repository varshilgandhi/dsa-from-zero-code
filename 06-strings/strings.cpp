// DSA from Zero #6 - a string is an array of letters.   g++ -std=c++17 strings.cpp -o strings && ./strings
// Note: a C++ std::string CAN be changed in place (s[0] = 'R' works). Python and Java strings can't.
#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<bool, int> is_palindrome(const string& w) {     // two fingers, both ends inward: O(n)
    int left = 0, right = (int)w.size() - 1, comparisons = 0;
    while (left < right) {
        comparisons++;
        if (w[left] != w[right]) return {false, comparisons};
        left++; right--;
    }
    return {true, comparisons};
}

int main() {
    string s = "NAMAN";
    cout << s[0] << " " << s.size() << " " << s.back() << "\n";   // N 5 N   (no s[-1] in C++)
    string t = "R" + s.substr(1);
    cout << t << "\n";                                               // RAMAN
    int count = 0;
    for (char ch : s) if (ch == 'A') count++;
    cout << count << "\n";                                           // 2
    for (string w : {"NAMAN", "LEVEL", "NAMIT", "racecar"}) {
        auto [ok, c] = is_palindrome(w);
        cout << w << " " << (ok ? "true" : "false") << " " << c << "\n";
    }
    // NAMAN true 2
    // LEVEL true 2
    // NAMIT false 1
    // racecar true 3
}
