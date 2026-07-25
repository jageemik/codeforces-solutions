/*
ID: pythonnewb
TASK: Subsequence Update
LANG: C++
*/

/*
Date: 2/22/25
Rating: 1100
*/ 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> sums;
    sums.resize(t);
    for (int i = 0; i < t; i++) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a;
        a.resize(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int seg_len  = r - l;
        int min_seg = 0;
        for (int j = 0; j < seg_len; j++) {
            min_seg += a[j];
        }
        int possible = 0;
        int index = 0;
        for (int j = 0; j + seg_len < n; j++) {
            for (int k = j; k < j + seg_len; k++) {
                possible += a[k];
            }
            if (possible < min_seg) {
                index = j;
            }
        }
        int sum = 0;
        if (index < l) { // use r
            for (int j = 0; j < index; j++) {
                sum += a[j];
            }
        }
        else { // use l
            index += seg_len;
            for (int j = 0; j < index; j++) {
                sum += a[j];
            }
        }
        sums.push_back(sum);
    }
    for (int sum : sums) {
        cout << sum << endl;
    }
    return 0;
}