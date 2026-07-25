/* 
ID: pythonnewb
TASK: C_Clock_and_Strings
LANG: C++ 
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<ll>>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define sz(x) ((int)(x).size())

const char nl = '\n';

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mx = max (a, b);
    int mn = min(a, b);
    bool ccon = (c < mx && c > mn);
    bool dcon = (d < mx && d > mn);
    if (ccon == dcon) cout << "NO" << nl;
    else cout << "YES" << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}