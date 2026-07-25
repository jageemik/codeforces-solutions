/*
ID: pythonnewb
TASK: B_Lovely_Palindromes
LANG: C++
*/
// 6 minutes total
#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve()
{
    string n;
    cin >> n;
    string r(n.rbegin(), n.rend());
    cout << n << r << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}