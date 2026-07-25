/*
ID: pythonnewb
TASK: B_Restore_the_Weather
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    vector<int> b;
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        temp.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(temp.begin(), temp.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        auto it = find(a.begin(), a.end(), temp[i]);
        if (it != a.end()) {
            *it = b[i];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
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