/* 
ID: pythonnewb
TASK: B_Chemistry
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
    string in;
    cin >> in;
    unordered_map<char, int> freq;
    for (char x : in) {
        freq[x]++;
    }
    int count = 0;
    for (auto x : freq) {
        count += x.second/2;
    }
    if (count >= (n-k)/2) cout << "YES" << nl;
    else cout << "NO" << nl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}