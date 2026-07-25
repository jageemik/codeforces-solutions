/* 
ID: pythonnewb
TASK: B_Expensive_Number
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
    string n;
    cin >> n;
    bool flag = false;
    ll count = -1;
    for (int i = n.length()-1; i >= 0; i--) {
        if (n[i] != '0') {
            flag = true;
            count++;
        }
        else if (!flag) count++;
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