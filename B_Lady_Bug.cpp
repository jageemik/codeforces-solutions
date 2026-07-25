/*
ID: pythonnewb
TASK: A. Jagged Swaps
LANG: C++                 
*/

// SOLVED in contest!!!!!!! (with 1 minute left lol) - 3/29/25

#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> findIndex(string str) {
    unordered_map<string, int> result;
    for (int i = 0; i < str.length(); i++) {
        bool even_or_odd = i % 2 == 0; // even = true, odd = false
        if (str[i] == '0') {
            if (even_or_odd) {
                result["0e"]++;
            }
            else {
                result["0o"]++;
            }
        }
        if (str[i] == '1') {
            if (even_or_odd) {
                result["1e"]++;
            }
            else {
                result["1o"]++;
            }
        }
    }
    return result;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        unordered_map<string, int> map_a, map_b;
        int n;
        cin >> n;
        string a,  b;
        cin >> a >> b;
        map_a = findIndex(a);
        map_b = findIndex(b);
        if (map_a["1o"] <= map_b["0e"] && map_a["1e"] <= map_b["0o"]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}