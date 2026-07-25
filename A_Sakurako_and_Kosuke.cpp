/*
ID: pythonnewb
TASK: A_Sakurako_and_Kosuke
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0) cout << "Sakurako" << "\n";
    else cout << "Kosuke" << "\n";
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