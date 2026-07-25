/*
ID: pythonnewb
TASK: A. Gellyfish and Tricolor Pansy
LANG: C++
*/

#include <iostream>
using namespace std;

int main()
{
     // if smallest num = gelly's hp or gelly's knight's hp, then flower wins else gelly wins
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string result = a < b && a < d || c < b && c < d ? "Flower" : "Gellyfish";
        cout << result << endl;
    }
    return 0;
}