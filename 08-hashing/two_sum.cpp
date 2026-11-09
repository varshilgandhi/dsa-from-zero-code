// DSA from Zero #8 - two sum in one pass with a hash set.   g++ -std=c++17 two_sum.cpp -o ts && ./ts
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void two_sum(const vector<int>& prices, int target) {
    unordered_set<int> seen;                       // the note
    for (int p : prices) {
        if (seen.count(target - p)) { cout << target - p << " " << p << "\n"; return; }
        seen.insert(p);
    }
    cout << "none\n";
}

int main() {
    two_sum({30, 55, 20, 70, 45, 80}, 100);   // 30 70
    two_sum({40, 25, 60, 75}, 100);           // 40 60
}
