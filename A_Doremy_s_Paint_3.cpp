/*
ID: pythonnewb
TASK: A. Doremy's Paint 3
LANG: C++                 
*/

// Rating: 800 - Solved in 42 minutes (yikes) - 3/14/25

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> num_dupl;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            num_dupl[x]++;
        }
        vector<int> nums;
        if (num_dupl.size() < 3) {
            for (auto num : num_dupl) {
                nums.push_back(num.first);
            }
        }
        if (num_dupl.size() == 1 || num_dupl.size() == 2 && abs(num_dupl.at(nums[0]) - num_dupl.at(nums[1])) <= 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
} 