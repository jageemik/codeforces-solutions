/*
ID: pythonnewb
TASK: B_Pathless
LANG: C++
*/

#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int n, s;
    cin >> n >> s;
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
        sum += x;
    }
    if (s >= sum && s != sum+1) {
        cout << -1 << "\n";
        return;
    }
    sort(arr, arr + n);
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ind = i;
            break;
        }
    }
    sort(arr + ind, arr + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
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