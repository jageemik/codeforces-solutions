/*
ID: pythonnewb
TASK: B_Two_Out_of_Three
LANG: C++
*/

#include <iostream>
#include <set>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n, 1);
    vector<vector<int>> index(101);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        index[a[i]].push_back(i);
    }
    int count = 2;
    for (int i = 1; i <= 100; i++)
    {
        if ((int)index[i].size() >= 2)
        {
            b[index[i][0]] = count;
            count++;
            if (count > 3) {
            break;
        }
        }
    }
    if (count <= 3)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
    }
    cout << "\n";
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