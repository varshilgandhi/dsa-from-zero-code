// DSA from Zero #13 - prefix sums.   g++ -std=c++17 prefix_sums.cpp -o ps && ./ps
#include <iostream>
#include <vector>
using namespace std;

vector<long long> prefix(const vector<int>& a) {
    vector<long long> P = {0};
    for (int x : a) P.push_back(P.back() + x);
    return P;
}

int main() {
    auto P = prefix({5, 3, 8, 2, 6, 4});
    for (auto v : P) cout << v << " ";
    cout << "\n";                               // 0 5 8 16 18 24 28
    cout << P[4] - P[1] << " " << P[6] - P[2] << "\n";   // 13 20
    auto P2 = prefix({4, 1, 3, 7, 2});
    cout << P2[4] - P2[1] << "\n";              // 11
}
