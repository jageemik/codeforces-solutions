/* 
ID: pythonnewb
TASK: A_Course_Wishes
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
    int n, k;
    cin >> n >> k;
    vi a(k);
    vector<pair<int, int>> b;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        b.pb({i, x});
    }
    sort(all(b), [](auto a, auto b) {
        return a.second < b.second;
    });
    vi out;
    int count = 0;
    for (int i = n-1; i >= 0; i--) {
        if (b[i].second == k+1) continue;
        for (int j = 0; j < (k+1)-b[i].second; j++) {
            out.pb(b[i].first);
            count++;
        }
    }
    cout << count << nl;
    for (auto x : out) cout << x << " ";
    cout << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}