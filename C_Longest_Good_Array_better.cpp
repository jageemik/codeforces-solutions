/*
ID: pythonnewb
TASK: C_Longest_Good_Array but better!!
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans, mid;
    ll low = 0, high = 50000;
    while (low <= high) {
        mid = (low + high) / 2;
        if (l + (mid*(mid+1))/2 <= r) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans + 1 << "\n";

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