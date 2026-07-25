/*
ID: pythonnewb
TASK: A_Short_Sort
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    string cards;
    cin >> cards;
    cout << ((cards[0] == 'a' || cards[1] == 'b' || cards[2] == 'c') ? "YES" : "NO") << "\n";
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