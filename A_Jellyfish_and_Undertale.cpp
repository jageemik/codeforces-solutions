/* 
ID: pythonnewb
TASK: A_Jellyfish_and_Undertale
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
    ll a, b, n;
    cin >> a >> b >> n;
    vll x(n);
    for (ll i = 0; i < n; i++) {
        cin >> x[i];
    }
    ll count = b;
    for (ll i = 0; i < n; i++) {
        count += min(x[i], a-1);
    }
    cout << count << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}