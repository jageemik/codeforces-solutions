/*
ID: pythonnewb
TASK: B. Normal Problem
LANG: C++
*/
#include <iostream>
using namespace std;

void solve() {
    string a;
    cin >> a;
    string reverse_a;
    for (int i = a.length()-1; i >= 0; i--) {
        if (a[i] == 'p') reverse_a += 'q';
        else if (a[i] == 'q') reverse_a += 'p';
        else reverse_a += 'w';
    }
    cout << reverse_a << endl;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}