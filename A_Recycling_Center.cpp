/*
ID: pythonnewb
TASK: A_Recycling_Center
LANG: C++
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    double c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    int result = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= c) {
            result--;
            floor(c/=2);
        }
    }
    cout << result << "\n";
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