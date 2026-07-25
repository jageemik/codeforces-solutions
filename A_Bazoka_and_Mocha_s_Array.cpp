/*
ID: pythonnewb
TASK: A_Bazoka_and_Mocha_s_Array
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int index = 0;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) index = i+1;
    }
    vector<int> suffix(a.begin() + index, a.end());
    vector<int> prefix(a.begin(), a.begin() + index);
    vector<int> b;
    for (int i = 0; i < n-index; i++) {
        b.push_back(suffix[i]);
    }
    for (int i = 0; i < index; i++) {
        b.push_back(prefix[i]);
    }
    if (is_sorted(b.begin(), b.end())) cout << "Yes" << "\n";
    else cout << "No" << "\n";
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