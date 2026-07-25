/*
ID: pythonnewb
TASK: A_Only_One_Digit
LANG: C++
*/

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    string x;
    cin >> x;
    int mn = x[0] - '0';
    for (int i = 1; i < x.length(); i++) {
        int current = x[i] - '0';
        if (current < mn && current >= 0) mn = current;
    }
    cout << mn << "\n";
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