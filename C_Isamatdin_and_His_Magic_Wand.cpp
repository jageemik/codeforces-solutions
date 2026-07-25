/*
ID: pythonnewb
TASK: C_Isamatdin_and_His_Magic_Wand
LANG: C++
*/
// 20 min; 11/15/25
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int first;
    cin >> first;
    bool parity = first % 2 == 0; // even
    bool flag = false;
    vector<int> vec(n);
    vec[0] = first;
    for (int i = 1; i < n; i++) {
        cin >> vec[i];
        if ((vec[i] % 2 == 0) != parity) {
            flag = true;
        }
    }
    if (flag) {
        sort(vec.begin(), vec.end());
    }
    for (int i : vec) cout << i << " ";
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