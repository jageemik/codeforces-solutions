/*
ID: pythonnewb
TASK: A. Min GCD
LANG: C++                 
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
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
        bool found = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; i < n - 1; j++) {
                if (min(vec[i], vec[j]) != gcd(vec[i], vec[j])) {
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}