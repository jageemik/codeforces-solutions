/* 
ID: pythonnewb
TASK: B_The_Secret_Number
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
    vll ans;
    ll count = 0;
    for (int i = 1; i <= 18; i++) {
        ll x = (ll)n/(ll)(1+pow(10, i));
        if (n % (ll)(1+pow(10, i)) == 0 && x + (x*(ll)pow(10,i)) == n) {
            // cout << "x: " << x << "y: " << (ll)(x*(ll)pow(10,i)) << " x + y: " <<  x + (x*(ll)pow(10,i)) << nl;
            ans.pb(x);
            count++;
        }
    }
    cout << count << nl;
    sort(all(ans));
    for (ll a : ans) {
        cout << a << " ";
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