/*
ID: pythonnewb
TASK: A_Gift_Carpet
LANG: C++
*/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> carpet;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        carpet.push_back(x);
    }
    string target = "vika";
    int index = 0;
    for (int j = 0; j < m; j++) {
        if (index == 4) break;
        for (int i = 0; i < n; i++) {
            if (carpet[i][j] == target[index]) {
                index++;
                break;
            }
        }
    }
    if (index == 4) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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