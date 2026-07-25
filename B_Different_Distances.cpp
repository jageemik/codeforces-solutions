/*
ID: pythonnewb
TASK: B_Different_Distances
LANG: C++
*/

#include <iostream>
using namespace std;
using ll = long long;

string two(int x, int y) {
    return to_string(x) + " " + to_string(y) + " " + to_string(y) + " " + to_string(x) + " " + to_string(y) + " " + to_string(x) + " " + to_string(x) + " " + to_string(y) + " " ;
}
string three(int x, int y, int z) {
    return to_string(x) + " " + to_string(x) + " " + to_string(y) + " " + to_string(x) + " " + to_string(y) + " " + to_string(z) + " " + to_string(x) + " " + to_string(z) + " " + to_string(y) + " " + to_string(y) + " " + to_string(z) + " " + to_string(z) + " " ;
}
void solve()
{
    int n;
    cin >> n;
    string output;
    if (n % 2 == 0) {
        for (int i = 1; i+1 <= n; i+=2) {
            output += two(i, i+1);
        }
    }
    else {
        output += three(1, 2, 3);
        for (int i = 4; i+1 <= n; i+=2) {
            output += two(i, i+1);
        }
    }
    cout << output << "\n";
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