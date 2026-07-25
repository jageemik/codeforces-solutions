/*
ID: pythonnewb
TASK: B_No_Casino_in_the_Mountains
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int count = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        count += (arr[i] == 0 ? 1 : 0);
        if (arr[i] == 1) count = 0;
        if (count == k) {
            count = 0;
            result++;
            i++;
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