/* 
ID: pythonnewb
TASK: A_Forbidden_Integer
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
    int n, k, x;
    cin >> n >> k >> x;
    if (x == 1 && n == 1 || x == 1 && k == 1|| (x == 1 && k == 2 && n % 2 == 1)) {
        cout << "NO" << nl;
        return;
    }
    if (x == 1 && k >= 2) {
        if (n % 2 == 1) {
            cout << "YES" << nl;
            cout << (n-3)/2 + 1 << nl;
            for (int i = 0; i < (n-3)/2; i++) {
                cout << "2 ";
            }
            cout << "3" << nl;
        }
        else {
            cout << "YES" << nl;
            cout << n/2 << nl;
            for (int i = 0; i < n/2; i++) {
                cout << "2 ";
            }
            cout << nl;
            return;
        }
    }
    else {
        cout << "YES" << nl;
        cout << n << nl;
        for (int i = 0; i < n; i++) {
            cout << "1 ";
        }
        cout << nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}