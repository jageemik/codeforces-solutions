/* 
ID: pythonnewb
TASK: B_Comparison_String
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 2;
    int prev = s[0];
    int mx = -1;
    for (int i = 1; i < n; i++) {
        if (s[i] == prev) count++;
        else {
            mx = max(count, mx);
            count = 2;
        }
        prev = s[i];
    }
    mx = max(count, mx);
    cout << mx << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}