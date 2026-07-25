/*
ID: pythonnewb
TASK: B_Fun_Permutation
LANG: C++
*/
// 24 minutes total, 15 minute idea & 9 minute implementation

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        cout << (n+1) - x << " ";
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