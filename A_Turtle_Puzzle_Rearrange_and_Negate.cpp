/*
ID: pythonnewb
TASK: A_Turtle_Puzzle_Rearrange_and_Negate
LANG: C++
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += abs(x);
    }
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