/*
ID: pythonnewb
TASK: Graphs_Practice
LANG: C++
*/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<vector<int>> adj;
vector<bool> vis;

void dfs(int curr) {
    if (vis[curr]) return;
    vis[curr] = true;
    cout << curr + 1 << " ";
    for (int neighbor : adj[curr]) {
        dfs(neighbor);
    }
}

void dfs_traversal(int n) {
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i);
        }
    }
    cout << "\n";
}
void bfs_traversal(int n) {
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            vector<int> queue;
            queue.push_back(i);
            vis[i] = true;
            while (!queue.empty()) {
                int curr = queue.front();
                queue.erase(queue.begin());
                cout << curr + 1 << " ";
                for (int neighbor : adj[curr]) {
                    if (!vis[neighbor]) {
                        vis[neighbor] = true;
                        queue.push_back(neighbor);
                    }
                }
            }
        }
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    adj.assign(n, vector<int>()); 
    vis.assign(n, false);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    dfs_traversal(n);
    for (int i = 0; i < n; i++) vis[i] = false;
    bfs_traversal(n);
    return 0;
}