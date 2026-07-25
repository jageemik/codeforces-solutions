/*
ID: pythonnewb
TASK: B_Lost_Permutation
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int m, s;
    cin >> m >> s;
    vector<int> found(m);
    int mx = 0;
    int sumFound = 0;
    for (int i = 0; i < m; i++) {
        cin >> found[i];
        mx = max(mx, found[i]);
        sumFound += found[i];
    }
    int sumFactorial = 0;
    for (int i = 1; i <= mx; i++) {
        sumFactorial += i;
    }
    while (sumFactorial - sumFound <= s) {
        if (sumFactorial - sumFound == s) {
            cout << "YES" << "\n";
            return;
        }
        mx++;
        sumFactorial += mx;
    }
    cout << "NO" << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}