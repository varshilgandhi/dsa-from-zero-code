// DSA from Zero #14 - binary search on the answer.   g++ -std=c++17 search_answer.cpp -o sa && ./sa
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int days_needed(const vector<int>& pages, int x) {
    int days = 1, today = 0;
    for (int p : pages) {
        if (today + p > x) { days++; today = 0; }
        today += p;
    }
    return days;
}

int least_per_day(const vector<int>& pages, int D) {
    int lo = *max_element(pages.begin(), pages.end());
    int hi = accumulate(pages.begin(), pages.end(), 0);
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (days_needed(pages, mid) <= D) hi = mid; else lo = mid + 1;
    }
    return lo;
}

int main() {
    cout << least_per_day({10, 20, 30, 40}, 2) << "\n";   // 60
    cout << least_per_day({20, 10, 30, 10}, 2) << "\n";   // 40
}
