/*
ID: pythonnewb
TASK: B_Palindrome_Twelve_and_Two_Terms
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    if (n == 10)
    {
        cout << -1 << "\n";
        return;
    }
    if (n % 12 == 10)
        cout << 22 << " " << n - 22 << "\n";
    else
        cout << n % 12 << " " << n - (n % 12) << "\n";
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