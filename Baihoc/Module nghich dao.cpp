#include <bits/stdc++.h>
using namespace std;

#define ms(s, n) memset(s,n,sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1, i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a, ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


//Modular Inverse, nghich dao module
//https://cp-algorithms.com/algebra/module-inverse.html
// a/b mod m = a.b^-1 mod m

// de ton tai nghich dao module cua a thi a voi m phai la bang 1
// note nghich dao cua a : a^(-1)

//Fiding the Modular Inverse using Extended Euclidean algorithm
// a.x + m.y = 1 => ax % m + my % m = 1 % m <=> ax % m = 1 (m != 1)

int x, y, d;

void extended(int a, int b){
    if (b == 0){
        x = 1;
        y = 0;
        d = a; // ucln
    }
    else {
        extended(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}

void inverse(int a, int m){
    extended(a, m);
    if (d != 1){
        cout << "Khong ton tai nghich dao module" << endl;
    }
    else {
        cout << (x % m + m) % m << endl;
    }
}
// sau qua trinh thi a^(-1) = a^(m-2) mod m voi m la snt
ll powMod(ll a, ll b, ll m){
    ll res = 1;
    a %= m;
    while (b){
        if (b % 2 == 1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

//m la so nguyen to
void inverse2(int a, int m){
    cout << powMod(a, m - 2, m) << endl;
}
// a/b % m = (a % m * b^(-1) % m) % m
int main(){
    inverse(6, 9);
    inverse2(8, 17);
    inverse(8, 17);
}