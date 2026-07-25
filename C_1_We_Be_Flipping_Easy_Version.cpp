/* 
ID: pythonnewb
TASK: C_1_We_Be_Flipping_Easy_Version
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
    vll b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll count = 0;
    for (int i = 0; i < n-1; i++) {
        if ((a[i] > 0) != (a[i+1] > 0)) {
            count++;
            b.pb(i+1);
        }
    }
    if (a[n-1] > 0) {
        count++;
        b.pb(n);
    }
    sort(rall(b));
    cout << count << nl;
    for (auto x : b) {
        cout << x << " ";
    }
    cout << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}