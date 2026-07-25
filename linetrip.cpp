/*
ID: pythonnewb
TASK: A. Line Trip
LANG: C++                 
*/

// 3/3/25 - Solved in 35 minutes 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        int mx = 0, current = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, arr[i] - current);
            current = arr[i];
        }
        cout << max(mx, (x - current) * 2) << endl;
    }
    return 0;
}
