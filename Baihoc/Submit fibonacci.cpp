#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
const int MX = 1e6+5;

long long fac[MX], inv[MX];

long long power(long long a, long long b) {
    long long res = 1;
    while(b) {
        if(b&1) res = res*a%MOD;
        a = a*a%MOD;
        b >>= 1;
    }
    return res;
}

void precompute() {
    fac[0] = inv[0] = 1;
    for(int i=1; i<MX; i++) {
        fac[i] = fac[i-1]*i%MOD;
        inv[i] = power(fac[i], MOD-2);
    }
}

long long C(int n, int k) {
    if(k>n || k<0) return 0;
    return fac[n]*inv[k]%MOD*inv[n-k]%MOD;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    precompute();
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        cout << C(n, k) << "\n";
    }
    return 0;
}
