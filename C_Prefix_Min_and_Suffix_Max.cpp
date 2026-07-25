/*
ID: pythonnewb
TASK: Problem 1. Astral Superposition
LANG: C++
*/
#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n], pre[n], suf[n];
    int mn, mx;
    cin >> arr[0];
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        pre[i] = min(arr[i], pre[i-1]);
    }
    suf[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        suf[i] = max(arr[i], suf[i+1]);
    }
    for (int i = 0; i < n; i++) {
        cout << (arr[i] == pre[i] || arr[i] == suf[i] ? '1' : '0');
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}