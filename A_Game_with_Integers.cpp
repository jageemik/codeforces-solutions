/*
ID: pythonnewb
TASK: A. Game with Integers
LANG: C++                 
*/

// Rating : 800 - 3/9/25 - Solved in 20 minutes

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 3 == 0) {
            cout << "Second" << endl;
        }
        else {
            cout << "First" << endl;
        }
    }
    return 0;
}