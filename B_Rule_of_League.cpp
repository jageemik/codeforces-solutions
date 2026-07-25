/*
ID: pythonnewb
TASK: B_Rule_of_League
LANG: C++
*/

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int greater = max(x,y);
    int result = 2;
    if (min(x,y) != 0 || greater == 0 || (n-1)%greater!=0) {
        cout << -1 << "\n";
        return;
    }
    while (result <= n) {
        for (int i = 0; i < greater; i++) { 
            cout << result << " ";
        }
        result += greater;
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