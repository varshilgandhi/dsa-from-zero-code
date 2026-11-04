// DSA from Zero #3 - boxes and arrows in C++.   g++ -std=c++17 boxes_and_arrows.cpp -o ba && ./ba
// Careful: C++ is DIFFERENT from Python here. `vector<int> b = a;` makes a real copy (a new row).
// To get Python's "one row, two names", ask for a reference: `vector<int>& b = a;`
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x = 5;
    int y = x;       // y gets its own box with 5
    x = 10;
    cout << y << "\n";                // 5

    vector<int> a = {3, 8, 12};
    vector<int>& b = a;               // reference: one row, two names (like Python's b = a)
    b[0] = 99;
    cout << a[0] << "\n";             // 99

    vector<int> c = a;                // in C++ this is a real copy (like Python's a.copy())
    c[0] = 1;
    cout << a[0] << " " << c[0] << "\n";   // 99 1

    // Today's task
    vector<int> t = {1, 2, 3};
    vector<int>& u = t;
    u[1] = 50;
    cout << t[0] << " " << t[1] << " " << t[2] << "\n";   // 1 50 3
}
