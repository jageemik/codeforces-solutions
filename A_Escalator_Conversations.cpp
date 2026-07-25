/*
ID: pythonnewb
TASK: A_Escalator_Conversations
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
    vector<ll> hv(n);
    for (int i = 0; i < n; i++) {
        cin >> hv[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (abs(H - hv[i]) == k * j) {
                count++;
                break;
            }
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