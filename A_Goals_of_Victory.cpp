/*
ID: pythonnewb
TASK: A. Goals of Victory
LANG: C++                 
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int result = 0;
        for (int i = 0; i < n-1; i++) {
            int x;
            cin >> x;
            result += x * -1;
        }
        cout << result << endl;
    }
    return 0;
} 