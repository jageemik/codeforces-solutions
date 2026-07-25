/*
ID: pythonnewb
TASK: D_This_Is_the_Last_Time
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<pair<int, int>, int>> c;
    for (int i = 0; i < n; i++) {
        int l, r, real;
        cin >> l >> r >> real;
        c.push_back(make_pair(make_pair(l, r), real));
    }
    sort(c.begin(), c.end());
    int cur = k;
    for (int i = 0; i < n; i++) {
        if (cur >= c[i].first.first && cur <= c[i].first.second && c[i].second > cur) cur = c[i].second; 
    }
    cout << cur << "\n";
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