/*
ID: pythonnewb
TASK: A_Question_Marks
LANG: C++
*/

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string answers = "";
    unordered_map<char, int> count;
    cin >> answers;
    for (char a : answers) {
        count[a]++;
    }
    int sum = min(count['A'], n) + min(count['B'], n) + min(count['C'], n) + min(count['D'], n);
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