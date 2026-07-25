/*
ID: pythonnewb
TASK: C_Can_I_Square
LANG: C++
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
    }
    long double rt = sqrt(sum);
    if (rt == (ll)rt) cout << "YES" << "\n";
    else cout << "NO" << "\n";

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