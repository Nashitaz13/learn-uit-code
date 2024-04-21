
#include <bits/stdc++.h>
using namespace std;
int binPow(int a, int k, int n) {
    a = a % n;
    int res = 1;
    while (k) {
        if (k & 1) res = ((res % n) * (a % n)) % n;
        a = ((a % n) * (a % n)) % n;
        k /= 2;
    }
    return res;
}
bool test(int a, int n, int k, int m) {
    int mod = binPow(a, m, n);
    if (mod == 1 || mod == n - 1) return true;
    for (int l = 1; l < k; ++l) {
        mod = (mod * mod) % n;
        if (mod == n - 1) return true;
    }
    return false;
}
bool isPrime(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7) return true;
    if (n < 11) return false;
    if (n % 2 == 0) return false;
    int k = 0, m = n - 1;
    while (m % 2 == 0) {
        m /= 2;
        k++;
    }
    if (!test(2, n, k, m)) return false;
    if (!test(3, n, k, m)) return false;
    if (!test(5, n, k, m)) return false;
    if (!test(7, n, k, m)) return false;
    return true;
}
bool check(int n) {
    if (n == 5) return true;
    if (n % 2 == 0 || !isPrime(n)) return false;
    int m = n;
    while (m > 0) {
        if (!isPrime(m)) return false;
        m = m / 10;
    }
    if (isPrime(n*10 + 1)) return true;
    if (isPrime(n*10 + 3)) return true;
    if (isPrime(n*10 + 7)) return true;
    if (isPrime(n*10 + 9)) return true;
    return false;
}
int main() {
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    int n,t,u,v;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n,0);
    cin >> a[0];
    if (check(a[0])) {b[0] = 1; a[0] = 1;} else {b[0] = 0; a[1] = 0;}
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (check(a[i])) {
            b[i] = b[i - 1] + 1;
            a[i] = 1;
        } else {
            b[i] = b[i - 1];
            a[i] = 0;
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> u >> v;
        cout << b[v - 1] - b[u - 1] + a[u - 1] << '\n';
    }
    return 0;
}
