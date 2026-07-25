/*
ID: pythonnewb
TASK: D. Rudolph and Christmas Tree
LANG: C++
*/
// ACCEPTED - 1 hour 17 minutes total
#include <iostream>
#include <iomanip>
using namespace std;

void solve()
{
    double n, d, h;
    cin >> n >> d >> h;
    double arr[(int)n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    double result = (d * h) / 2; // top triangle's area
    double multiplier = (d / 2) / h;
    for (int i = 0; i < n - 1; i++)
    {
        double diff = arr[i + 1] - arr[i];
        long double a = d - (diff * multiplier * 2);
        result += (diff < h) ? ((a + d) * .5) * diff : (d * h) / 2;
    }
    cout << fixed << setprecision(7) << result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}