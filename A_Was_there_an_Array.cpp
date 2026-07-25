/*
ID: pythonnewb
TASK: A_Was_there_an_Array
LANG: C++
*/
// struggled with this one!!! i thought 1 0 0 1 wasn't possible but was making test cases like a = 7 7 7 7 7 7 and b = 1 0 0 1 but didn't account for an array a like a = 1 1 1 2 2 2
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string b;
    int blen = n-2;
    for (int i = 0 ; i < blen; i++) {
        int x;
        cin >> x;
        b += to_string(x);
    }
    for (int i = 0; i < blen-2; i++) {
        if (b[i] == '1' && b[i+1] == '0' && b[i+2] == '1') {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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