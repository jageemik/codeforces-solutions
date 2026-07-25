/*
ID: pythonnewb
TASK: B. Make It Permutation
LANG: C++                 
*/
// Date: 6/29/25
// ACCEPTED first try woooooooo!!!!

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << (2*n-3) << endl;
    cout << "1 2 " << n << endl;
    int count = 2;
    while (count <= n-2) {
        cout << count << " 1 " << count << endl;
        cout << count << " " << (count+1) << " " << n << endl;
        count++;
    }
    cout << (n-1) << " 1 " << (n-1) << endl;
    cout << n << " 1 " << n << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
