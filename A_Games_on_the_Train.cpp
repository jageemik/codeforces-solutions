/*
ID: pythonnewb
TASK: A_Games_on_the_Train
LANG: C++
*/
// 5 min idea 3 min code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> t(n);
    int mx = -1;
    int mn = 999999;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    cout << mx + 1 - mn << "\n";
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