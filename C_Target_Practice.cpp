/*
ID: pythonnewb
TASK: A. Target Practice
LANG: C++                 
*/

// SOLVED - 4/1/25 - not the best way possible to solve this but still works - 23 minutes to solve :/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int score = 0;
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                char x;
                cin >> x;
                int m = min(min(i, j), min(11 - i, 11 - j));
                if (x == 'X') {
                    score += m;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}