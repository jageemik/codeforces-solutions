/*
ID: pythonnewb
TASK: B_Battle_for_Survive
LANG: C++
*/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll x = a[n-2];
    for (ll i = n-3; i >= 0; i--) {
        x -= a[i];
    }
    cout << a[n-1] - x << "\n";
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