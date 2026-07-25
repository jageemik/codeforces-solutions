/*
ID: pythonnewb
TASK: C_Longest_Good_Array
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    ll l, r;
    cin >> l >> r;
    if (r - l == 1) {
        cout << 2 << "\n";
        return;
    }
    if (r - l == 0) {
        cout << 1 << "\n";
        return;
    }

    ll count = 2;
    ll curr = l+1;
    for (ll i = 1; i < r; i++) {
        if (i < r - curr) {
            curr += i+1;
            count++;
        }
        else {
            cout << count << "\n";
            return;
        }
    }
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