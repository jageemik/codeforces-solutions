/*
ID: pythonnewb
TASK: C_Count_Good_Numbers
LANG: C++
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
ll find_prime_factors(ll n) {
    if (is_prime(n)) return 1;
    ll count = 0;
    while (n % 2 == 0) {
        n /= 2;
    }
    for (int i = 3; i*i <= n; i += 2) {
        while (n % i == 0) {
            if (i >= 10) count++;
            n /= i;
        }
    }
    return count;
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll result = 0;
    for (ll i = l; i <= r; i++) {
        result += find_prime_factors(i);
    }
    cout << result << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}