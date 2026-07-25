/*
ID: pythonnewb
TASK: C. Hard Problem
LANG: C++
*/
#include <iostream>
using namespace std;

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    a = (a > m) ? m : a;
    b = (b > m) ? m : b;
    cout << ((a + b + c > m * 2) ? m * 2 : a + b + c) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}