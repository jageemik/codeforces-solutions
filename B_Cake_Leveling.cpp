/*
ID: pythonnewb
TASK: B_Cake_Leveling
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<ll> output;
    ll sum = a[0];
    output.push_back(a[0]);
    for (ll i = 1; i < n; i++) {
        sum += a[i];
        ll mean = sum/(i+1);
        output.push_back(min(mean, output[i-1]));
    }
    for (ll i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << "\n";
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