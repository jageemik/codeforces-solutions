/*
ID: pythonnewb
TASK: B_Unconventional_Pairs
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int mx = -1;
    for (int i = 1; i < n; i+=2) {
        mx = max(mx, a[i]-a[i-1]);
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