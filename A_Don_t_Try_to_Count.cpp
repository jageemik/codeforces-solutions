/*
ID: pythonnewb
TASK: A. Don't Try to Count
LANG: C++                 
*/

// 3/23/25 50 minutes - Solved with hint from editorial - count can't be greater than 5

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; // x len, s len
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int count = -1;
        string new_x = x;
        bool found = false;
        while (!found && count <= 5) {
            if (new_x.find(s) != string::npos) {
                found = true;
            }
            count++;
            new_x += new_x;
        }
        if (count == 6) { 
            cout << -1 << endl; 
        }
        else {
            cout << count << endl;
        }
    }
    return 0;
}