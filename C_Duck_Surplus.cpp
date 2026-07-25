/*
ID: pythonnewb
TASK: C_Duck_Surplus
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<ll> ducks(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ducks[i];
    }
    ll mx = ducks[0];
    for (int i = 1; i < n; i++) {
        if (ducks[i] >= mx) mx = ducks[i];
        else mx += ducks[i]; 
    }
    cout << mx << "\n";
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