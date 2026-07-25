/*
ID: pythonnewb
TASK: C. Need More Arrays
LANG: C++                 
*/
// Rated: 1000
// Date: 6/2/25
// Could solve on my own :)
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        vector<long long> arr;
        cin >> n;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        long long count = 1;
        long long temp = arr.at(0);
        for (int i = 1; i < n; i++) {
            if (temp + 1 < arr.at(i)) {
                count++;    
                temp = arr.at(i);
            }
        }
        cout << count << endl;
    }
    return 0;
}