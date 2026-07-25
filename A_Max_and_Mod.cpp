/*
ID: pythonnewb
TASK: A. Max and Mod
LANG: C++                 
*/

#include <iostream>
using namespace std;

// SOLVED after contest - not in contest :< 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            if (n % 3 == 2) { // After looking at solution, this part isn't needed
                cout << 1 << " " << n << " " << 2 << " ";
                for (int i = 3; i < n; i++) {
                    cout << i << " ";
                }
            }
            else {
                cout << n << " "; // After looking at solution, this part is the only part needed - if n is odd, run this code, else -1
                for (int i = 1; i < n; i++) {
                    cout << i << " ";
                }
            }
        }
        else {
            cout << -1;
        }
        cout << endl;
    }
    
    return 0;
}