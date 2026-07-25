/*
ID: pythonnewb
TASK: A. Subsequence Update
LANG: C++                 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> arr, first_half, second_half;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        for (int i = 0; i < r; i++) {
            first_half.push_back(arr[i]);
        }
        for (int i = l-1; i < n; i++) {
            second_half.push_back(arr[i]);
        }
        sort(first_half.begin(), first_half.end());
        sort(second_half.begin(), second_half.end());
        cout << min(first_half[0] + first_half[1], second_half[0] + second_half[1]) << endl;
    }
    return 0;
}