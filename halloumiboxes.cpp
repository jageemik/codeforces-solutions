/*
ID: pythonnewb
TASK: A. 
LANG: C++                 
*/

// Looked at solution :(

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        bool non_desc = true;
        for (int i = 0; i < n; i++) {
            if (a[i+1] > a[i]) {
                non_desc = false;
            }
        }
        if (!non_desc) {
            for (int i = 0; i < n - k + 1; i++) {
                non_desc = true;
                reverse(a.begin() + i, a.begin() + i + k);
                for (int j = 0; j < n; j++) {
                    if (a[j+1] > a[j]) {
                        non_desc = false;
                    }
                }
                if (non_desc) {
                    break;
                }
            }
        }
        if (!non_desc) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
