/*
ID: pythonnewb
TASK: A. Sequence Game
LANG: C++                 
*/
// work on later
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n*2-1) << endl;
        string temp;
        int x;
        cin >> x;
        cout << to_string(x) + " ";
        for (int i = 1; i < n; i++) {
            cout << 1 << " ";
            cin >> x;
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}