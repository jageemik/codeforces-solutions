/*
ID: pythonnewb
TASK: A_Greedy_Monocarp
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    ll sum = 0;
    ll mn = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++) {
        sum += a[i];
        if (k - sum < mn && k - sum >= 0) mn = k - sum;
    }
    cout << mn << "\n";
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