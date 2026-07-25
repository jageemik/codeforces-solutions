/*
ID: pythonnewb
TASK: A_Too_Min_Too_Max
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
    sort(a.begin(),a.end());
    cout << abs(a[0]-a[n-2]) + abs(a[n-2]-a[1]) + abs(a[1]-a[n-1]) + abs(a[n-1]-a[0]) << "\n";
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