/*
ID: pythonnewb
TASK: A. Jagged Swaps
LANG: C++                 
*/

// SOLVED in contest!!! - 3/29/25

#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        int mn = vec[0], mx = vec[0];
        for (int i = 0; i < n; i++) {
            int current = vec[i];
            if (current < mn) {
                mn = current;
            }
            if (current > mx) {
                mx = current;
            }
        }
        cout << mx - mn << endl;
    }
    return 0;
}