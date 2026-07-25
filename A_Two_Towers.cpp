/*
ID: pythonnewb
TASK: A_Two_Towers
LANG: C++
*/
// 11 min idea, 30 minute total 
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;
    string to, tt;
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        to += x;
    }
    for (int i = 0; i < m; i++) {
        char x;
        cin >> x;
        tt += x;
    }
    reverse(tt.begin(), tt.end());
    string towers = to + tt;
    int two = 0;
    int count = 1;
    char prev, curr;
    for (int i = 1; i < towers.length(); i++) {
        prev = towers[i-1];
        curr = towers[i];
        if (prev == curr) count++;
        else if (count == 2) {
            two++;
            count = 1;
        }
        else if (count > 2) {
            cout << "NO" << "\n";
            return;
        }
    }
    if (count == 2) {
            two++;
            count = 1;
        }
    else if (count > 2) {
        cout << "NO" << "\n";
        return;
    }
    if (two > 1) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}