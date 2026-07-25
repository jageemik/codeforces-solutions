/*
ID: pythonnewb
TASK: A. Game of Division
LANG: C++                 
*/

// 3/25/25 retry - SOLVED 3/25/25

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> integers;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            integers.push_back(x);
        }
        int result = 0;
        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (abs(integers[i] - integers[j]) % k == 0 && i != j) {
                    found = true;
                }
            }
            if (!found) {
                result = i + 1;
            }
        }
        if (result != 0) {
            cout << "YES" << endl << result << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}