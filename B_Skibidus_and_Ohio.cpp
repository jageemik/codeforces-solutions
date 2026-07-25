/*
ID: pythonnewb
TASK: B_Skibidus_and_Ohio
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] == s[i+1]) {
            cout << 1 << "\n";
            return;
        }
    }
    cout << s.length() << "\n";
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