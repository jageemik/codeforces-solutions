/*
ID: pythonnewb
TASK: B_Deque_Process
LANG: C++
*/

#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 1;
    int r = n-1;
    string result = "L";
    // while l < r 
    int count = 0;
    while (l < r) {
        if (count % 2 == 0) {
            result += (arr[r] < arr[l]) ? "RL" : "LR";
        } 
        else {
            result += (arr[r] > arr[l]) ? "RL" : "LR";
        }   
        l++;
        r--;
        count++;
    }
    if (n % 2 == 0) result += "L";
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