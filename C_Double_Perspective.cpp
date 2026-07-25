/*
ID: pythonnewb
TASK: C_Double_Perspective
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    int adj_mat[n][n];
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        adj_mat[x-1][y-1] = 1;
        adj_mat[y-1][x-1] = 1;
        
    }
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