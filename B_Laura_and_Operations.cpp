/* 
ID: pythonnewb
TASK: B_Laura_and_Operations
LANG: C++ 
*/
// 20 minute solve
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
    int a, b, c;
    cin >> a >> b >> c;
    cout << (b % 2 == c % 2) << " " << (a % 2 == c % 2) << " " << (a % 2 == b % 2) << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}