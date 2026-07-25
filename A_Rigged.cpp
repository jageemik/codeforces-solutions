/*
ID: pythonnewb
TASK: A_Rigged
LANG: C++
*/

#include <iostream>
#include <vector>
#include <utility>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int s;
        int e;
        cin >> s >> e;
        a[i] = {s,e};
    } 
    ll w = a[0].first;
    for (int i = 1; i < n; i++) {
        if (a[i].first >= w && a[i].second >= a[0].second) {
            cout << -1 << "\n";
            return;
        }
    }
    cout << w << "\n";
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