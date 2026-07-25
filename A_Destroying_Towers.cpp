/*
ID: pythonnewb
TASK: A_Destroying_Towers
LANG: C++
*/
// 11 min 30 s
// 8 min 23 s solution, 3 min 7 s implementation
#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int f;
    cin >> f;
    int min = f, sum = f;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (min >= x) {
            min = x;
            sum += x;
        }
        else {
            sum += min;
        }
    }
    cout << sum << "\n";
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