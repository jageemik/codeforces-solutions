/*
ID: pythonnewb
TASK: A_Ela_Sorting_Books
LANG: C++
*/

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;
    string books;
    cin >> books;
    map<char, int> m;
    for (char b : books) {
        m[b]++;
    }
    int sum = 0;
    for (int i = m.size()-1; i >= 0; i--) {
        
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}