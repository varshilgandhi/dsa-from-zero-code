// DSA from Zero #17 - the call stack.   g++ -std=c++17 call_stack.cpp -o cs && ./cs
#include <iostream>
using namespace std;

void c() { cout << "c\n"; }
void b() { cout << "b starts\n"; c(); cout << "b ends\n"; }
void a() { cout << "a starts\n"; b(); cout << "a ends\n"; }

int main() {
    a();   // a starts / b starts / c / b ends / a ends
}
