/*
ID: pythonnewb
TASK: A_Submission_is_All_You_Need
LANG: C++
*/

#include <iostream>
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
        sum += x;
        if (x == 0) sum++;
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