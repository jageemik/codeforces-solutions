/*
ID: pythonnewb
TASK: C_Those_Who_Are_With_Us
LANG: C++
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int mx = 0;
    int arr[n][m];
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            arr[i][j] = x;
            if (x > mx) {
                mx = x;
                count = 1;
            }
            else if (x == mx) count++;
        }
    }
    vector<int> r(n), c(m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == mx) {
                r[i]++;
                c[j]++;
            }
        }
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (r[i] + c[j] - (arr[i][j] == mx) == count) flag = true;
        }
    }
    cout << mx - int(flag) << endl;
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