/*
ID: pythonnewb
TASK: B_Make_it_Zigzag
LANG: C++
*/
// 52 minutes total; 34 minutes 30 second idea, 13 minute 30 second code, 4 minute debug

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    ll currentMax = 0;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        currentMax = max(currentMax, x);
        if (i % 2 == 1) {
            arr[i] = currentMax;
        }
        else {
            arr[i] = x;
        }
    }
    ll count = 0;
    if (arr[0] - arr[1] >= 0) count = arr[0] - arr[1] + 1;
    for (int i = 2; i < n; i+=2) {
        if (arr[i] >= arr[i-1]) {
            count += arr[i] - arr[i-1] + 1;
        }
    }
    cout << count << "\n";
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