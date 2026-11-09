// DSA from Zero #9 - two pointers, part 1.   g++ -std=c++17 two_pointers.cpp -o tp && ./tp
#include <iostream>
#include <vector>
using namespace std;

void sorted_two_sum(const vector<int>& a, int target) {
    int l = 0, r = (int)a.size() - 1;
    while (l < r) {
        int t = a[l] + a[r];
        if (t == target) { cout << a[l] << " " << a[r] << "\n"; return; }
        if (t < target) l++; else r--;
    }
    cout << "none\n";
}

int remove_repeats(vector<int>& a) {
    if (a.empty()) return 0;
    int write = 1;
    for (size_t read = 1; read < a.size(); read++)
        if (a[read] != a[write - 1]) a[write++] = a[read];
    return write;
}

int main() {
    sorted_two_sum({10, 20, 35, 50, 65, 80}, 85);   // 20 65
    vector<int> a = {1, 1, 2, 3, 3, 3, 4};
    int k = remove_repeats(a);
    cout << k << ":";
    for (int i = 0; i < k; i++) cout << " " << a[i];
    cout << "\n";                                    // 4: 1 2 3 4
    sorted_two_sum({5, 15, 25, 40, 60}, 55);         // 15 40
}
