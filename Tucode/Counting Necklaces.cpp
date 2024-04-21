#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll power(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    ll n, m;
    cin >> n >> m;
    ll res = power(m, n, MOD);
    for (ll k = 1; k <= n; ++k) {
        ll temp = (power(m, gcd(n, k), MOD) + MOD - res) % MOD;
        res = (res + temp) % MOD;
    }
    res = (res * power(n, MOD - 2, MOD)) % MOD;
    cout << res << "\n";
    return 0;
}
