/*
ID: pythonnewb
TASK: Distinct_Numbers
LANG: C++
*/

#include <iostream>
#include <set>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    set<int> distinct;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        distinct.insert(x);
    }
    int count = 0;
    for (int i = 0; i < distinct.size(); i++) {
        count++;
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}