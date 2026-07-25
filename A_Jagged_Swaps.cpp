/*
ID: pythonnewb
TASK: A. Jagged Swaps
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
        vector<int> arr;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) { // populate vector
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int curr = 1;
        bool sortable = false;
        while (curr < n-1) { // check and sort
            if (arr[curr] > arr[curr-1] && arr[curr] > arr[curr+1]) {
                sortable = true;
            }
            curr++;
        }
        if (sortable && arr[0] == 1 || is_sorted(arr.begin(), arr.end())) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}