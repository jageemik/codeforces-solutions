/*
ID: pythonnewb
TASK: B_Crimson_Triples
LANG: C++
*/
// REDO THIS ONE IF POSSIBLE FOR PRACTICE
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= n; i++) {
        sum += pow(floor(n/i),2);
    }
    cout << sum << "\n";
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