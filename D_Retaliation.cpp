/*
ID: pythonnewb
TASK: B. Retaliation
LANG: C++                 
*/
// Date: 6/30/25
// ACCEPTED after reading editorial
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int diff = vec[1] - vec[0];
    for (int i = 2; i < n; i++) {
        if (vec[i] - vec[i-1] != diff) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        vec[i] += (diff < 0) ? diff * (n - i) : -diff * (i + 1);
    }
    if (vec[0] >= 0 && vec[0] % (n+1) == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}