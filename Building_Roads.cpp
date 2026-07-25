/*
ID: pythonnewb
TASK: Building_Roads
LANG: C++
*/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> adj(N);
    vector<bool> visited(N, false);
    int count = 0;
    string result;
    for (ll i = 0; i < M; i++) {
        ll a, b;
        cin >> a >> b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    ll previous = 1;
    for (ll i = 0; i < N; i++) {
        if (!visited[i]) {
            count++;
            if (i+1 != 1) result += to_string(previous) + " " + to_string(i+1) + "\n";
            previous = i+1;
            vector<ll> stack;
            stack.push_back(i);
            visited[i] = true;
            while (!stack.empty()) {
                ll node = stack.back();
                stack.pop_back();
                for (ll neighbor : adj[node]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        stack.push_back(neighbor);
                    }
                }
            }
        }
    }
    cout << count - 1 << "\n";
    cout << result << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}