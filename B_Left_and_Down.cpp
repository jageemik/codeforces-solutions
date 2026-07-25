/*
ID: pythonnewb
TASK: B_Left_and_Down
LANG: C++
*/

#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

void solve()
{
    long long a, b, k;
    cin >> a >> b >> k;
    long long div = gcd(a, b);
    a /= div;
    b /= div;
    // debug
    // cout << a << " " << b << endl;
    cout << (k >= max(a, b) ? 1 : 2) << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}