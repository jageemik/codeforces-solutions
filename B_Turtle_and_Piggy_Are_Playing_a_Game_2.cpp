/* 
ID: pythonnewb
TASK: B_Turtle_and_Piggy_Are_Playing_a_Game_2
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
    ll n;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(all(a));
    ll ans = a[n/2];
    cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}