/* 
ID: pythonnewb
TASK: A_Friendly_Numbers
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

ll sum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;      
    }
    return sum;
}
void solve() {
    ll x;
    cin >> x;
    ll count = 0;
    for (int i = x+1; i < x + 1000; i++) {
        if (i - sum(i) == x) count++;
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