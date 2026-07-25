/*
ID: pythonnewb
TASK: B_Tatar_TV_Show
LANG: C++
*/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> ones(k, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ones[i%k]++; 
    }
    for (auto x : ones) {
        if (x % 2 != 0) {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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