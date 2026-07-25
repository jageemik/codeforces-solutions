/*
ID: pythonnewb
TASK: A. Serval and String Theory
LANG: C++                 
*/

// In Contest - had to do something else during contest so couldn't solve
// Off Contest - solved in 10 minutes ._.

#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        set<char> s;
        for (char ch : str) {
            s.insert(ch);
        }
        bool all_same = s.size() == 1;
        if (!all_same && (str.compare(reversed) < 0 || k >= 1)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}