#include<bits/stdc++.h>
using namespace std;
//wrong 20 case =))) het cuu
const long long MOD = 1e9+7;

long long power(long long a, long long b) {
    if (b == 0) return 1;
    if (b == 1) return a % MOD;
    long long t = power(a, b / 2);
    t = (t * t) % MOD;
    if (b % 2) t = (t * a) % MOD;
    return t;
}

int main() {
    freopen("SQUARES.INP", "r", stdin);
    freopen("SQUARES.OUT", "w", stdout);
    long long N, L;
    cin >> N >> L;
    long long S = (L * L) % MOD;
    long long T = ((S * power(2, N)) % MOD + S) % MOD;
    cout << T;
    return 0;
}
