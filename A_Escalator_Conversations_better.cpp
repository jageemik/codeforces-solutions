/*
ID: pythonnewb
TASK: A_Escalator_Conversations but better!! (after reading editorial)
LANG: C++
*/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    ll k, H;
    cin >> n >> m >> k >> H;
    ll count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ll diff = abs(x - H);
        if (diff != 0 && diff % k == 0 && diff <= k*(m-1)) count++;
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