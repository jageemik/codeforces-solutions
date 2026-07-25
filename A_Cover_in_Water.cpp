/*
ID: pythonnewb
TASK: A. Cover in Water
LANG: C++
*/

/* 
3/7/25 
Rating: 800
Time: 21 minutes to solve on my own!!!
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool three = false;
        int count = 0;
        for (char c : s) {
            if (c == '.') {
                count++;
            }
        }
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                three = true;
            }
        }
        if (three) {
            cout << 2 << endl;
        }
        else {
            cout << count << endl;
        }
    }
    return 0;
}