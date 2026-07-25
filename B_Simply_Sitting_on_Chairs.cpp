/* 
ID: pythonnewb
TASK: B_Simply_Sitting_on_Chairs
LANG: C++ 
*/
// AC in 25 minutes
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
    vector<pair<int,int>> p(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p[i].first = x;
    }
    for (int i = 0; i < n; i++) {
        p[i].second = p[p[i].first-1].first;
        // cout << "f" << i << ": " << p[i].second << " ";
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].first >= p[i].second) count++;
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