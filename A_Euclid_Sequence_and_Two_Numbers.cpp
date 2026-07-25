/*
ID: pythonnewb
TASK: A_Euclid_Sequence_and_Two_Numbers
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
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b.rbegin(), b.rend());
    for (ll i = 0; i < n - 2; i++)
    {
        if (b[i] % b[i + 1] != b[i + 2])
        {
            cout << "-1" << "\n";
            return;
        }
    }
    cout << b[0] << " " << b[1] << "\n";
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