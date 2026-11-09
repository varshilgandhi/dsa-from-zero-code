// DSA from Zero #10 - reverse in place, sorted squares.   g++ -std=c++17 two_pointers_2.cpp -o tp2 && ./tp2
#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void show(const vector<int>& a) { for (int x : a) cout << x << " "; cout << "\n"; }

vector<int> sorted_squares(const vector<int>& a) {
    vector<int> out(a.size());
    int l = 0, r = (int)a.size() - 1;
    for (int pos = (int)a.size() - 1; pos >= 0; pos--) {
        if (abs(a[l]) > abs(a[r])) { out[pos] = a[l] * a[l]; l++; }
        else { out[pos] = a[r] * a[r]; r--; }
    }
    return out;
}

int main() {
    vector<int> a = {3, 8, 12, 5, 9};
    for (int l = 0, r = (int)a.size() - 1; l < r; l++, r--) swap(a[l], a[r]);
    show(a);                                // 9 5 12 8 3
    show(sorted_squares({-4, -1, 0, 3, 10}));   // 0 1 9 16 100
    show(sorted_squares({-7, -3, 2, 3, 11}));   // 4 9 9 49 121
}
