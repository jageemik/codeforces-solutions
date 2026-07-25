/* 
ID: pythonnewb
TASK: B_Heapify_1
LANG: C++ 
*/
// USED EDITORIAL - DO LATER FOR PRACTICE
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
    vi a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i+=2) {
        for (int j = i; j <= n; j*=2) {
            for (int k = i*2; k <= n; k*=2) {
                if (a[k/2] > a[k]) {
                    swap(a[k/2], a[k]);
                }
            }
        }
    }
    if (is_sorted(all(a))) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}