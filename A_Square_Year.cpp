/*
ID: pythonnewb
TASK: A_Square_Year
LANG: C++
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

void solve()
{
    int year;
    cin >> year;
    double output = sqrt(year);
    if (output == (int)output) cout << 0 << " " << output << "\n";
    else cout << -1 << "\n";
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