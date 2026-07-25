/*
ID: pythonnewb
TASK: Reflection
LANG: C++
*/
// Used editorial :(
#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            count++;
        }
    }
    string result = (count > k && k * 2 <= n) ? "Bob" : "Alice";
    cout << result << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;

}