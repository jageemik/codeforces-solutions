/*
ID: pythonnewb
TASK: A_Dr_TC
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') count++;
        else count += n-1;
    }
    cout << count << "\n";
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