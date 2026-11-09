// DSA from Zero #5 - arrays: five jobs and their price.   g++ -std=c++17 arrays.cpp -o arrays && ./arrays
// std::vector is C++'s growable array, the same shelf as a Python list.
#include <algorithm>
#include <chrono>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void show(const vector<string>& a) { for (auto& x : a) cout << x << " "; cout << "\n"; }

int main() {
    vector<string> a = {"rice", "dal", "sugar", "tea", "oil"};
    cout << a[3] << "\n";                                                   // tea   O(1)
    cout << (find(a.begin(), a.end(), "sugar") != a.end()) << "\n";         // 1     O(n)
    a.push_back("salt");                                                    //       O(1) on average
    a.insert(a.begin(), "atta");                                            //       O(n)
    show(a);                        // atta rice dal sugar tea oil salt
    a.erase(a.begin() + 2);                                                 //       O(n)
    show(a);                        // atta rice sugar tea oil salt
    a.pop_back();                                                           //       O(1)
    show(a);                        // atta rice sugar tea oil

    const int n = 100000;
    auto t0 = chrono::steady_clock::now(); vector<int> b;
    for (int i = 0; i < n; i++) b.push_back(i);
    auto t1 = chrono::steady_clock::now(); vector<int> c;
    for (int i = 0; i < n; i++) c.insert(c.begin(), i);
    auto t2 = chrono::steady_clock::now();
    cout << "front is slower: " << ((t2 - t1) > (t1 - t0) ? "true" : "false") << "\n";   // front is slower: true
}
