/* 
ID: pythonnewb
TASK: B_Everything_Everywhere
LANG: C++ 
*/
// 29 min solve!!
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
    vll p(n);
    for (ll i = 0; i < n; i++) {
        cin >> p[i];
    }
    ll count = 0;
    for (ll i = 0; i < n-1; i++) {
        if (abs(p[i]-p[i+1]) == gcd(p[i],p[i+1])) count++;
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