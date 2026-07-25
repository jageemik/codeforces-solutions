/*
ID: pythonnewb
TASK: A_Zhily_and_Array_Operating
LANG: C++
*/

#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll curr = a[n-1];
    ll count = 0;
    for (int i = n-2; i >= 0; i--) {
        if (a[i] + a[i+1] >= a[i]) {
            a[i] = a[i] + a[i+1];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) count++;
    }
    cout << count << "\n";
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