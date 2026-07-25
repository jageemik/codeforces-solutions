/*
ID: pythonnewb
TASK: Vanya and Lanterns
LANG: C++
*/

/*
Date: 2/17/25
Rating: 1200
*/ 

// UNSOLVED

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> lanterns(n);
    for (int i = 0; i < n; i++) {
        cin >> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());
    double result = 2.0 * max(lanterns[0], l - lanterns[n - 1]);
    for (int i : lanterns) {
        cout << i;
    }
    return 0;
}
