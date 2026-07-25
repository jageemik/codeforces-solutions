/* 
ID: pythonnewb
TASK: A_FizzBuzz_Remixed
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
    ll ans;
    if (n % 15 == 0) ans = 1 + 3*(n/15);
    else if (n % 15 == 1) ans = 2 + 3*(n/15);
    else ans = 3 + 3*(n/15);
    cout << ans << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}