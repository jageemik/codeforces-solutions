/*
ID: pythonnewb
TASK: A_Love_Triangle
LANG: C++
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> adj(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        adj[i]=x-1;
    }
    for (int i = 0; i < n; i++) {
        if (adj[adj[adj[i]]] == i) {
            cout << "YES";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}