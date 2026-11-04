// DSA from Zero #1 - binary search on 8 cards.   g++ -std=c++17 binary_search.cpp -o bs && ./bs
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// Returns {position, flips}. position is -1 if target is not there. cards must be sorted.
pair<int, int> binarySearch(const vector<int>& cards, int target) {
    int lo = 0, hi = (int)cards.size() - 1, flips = 0;
    while (lo <= hi) {                  // 4. repeat while something is left
        int mid = lo + (hi - lo) / 2;   // 1. look at the middle (no overflow)
        flips++;
        if (cards[mid] == target) return {mid, flips};  // 2. compare
        if (cards[mid] < target) lo = mid + 1;          // 3. throw away the left half
        else hi = mid - 1;                              // 3. throw away the right half
    }
    return {-1, flips};
}

int main() {
    vector<int> cards = {3, 8, 12, 19, 25, 31, 37, 44};
    auto a = binarySearch(cards, 37); cout << a.first << " " << a.second << "\n";   // 6 3
    auto b = binarySearch(cards, 30); cout << b.first << " " << b.second << "\n";   // -1 3
    vector<int> yourTurn = {2, 5, 9, 14, 20, 27, 33, 40};
    auto c = binarySearch(yourTurn, 9); cout << c.first << " " << c.second << "\n"; // 2 3
}
