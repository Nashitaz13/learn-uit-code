#include<bits/stdc++.h>
using namespace std;

//Modular Arithmetic
//(a + b) mod m = (a mod m + b mod m) mod m
// (a - b) mod m = (a mod m - b mod m) mod m
// (a * b) (mod m) = ((a mod m) * (b mod m)) mod m
// a^b mod m = (a mod m)^b mod m
// ex: a = 10^16 = b, tinh (a*b) % (10^9 + 7)
// ma 10^32 > ll nen dung cong thuc
// (10^16 % (10^9 + 7)) * (10^16 % (10^9 + 7)) % (10^9 + 7)
// a = 7, b = 12 => (7 % 3) * (12 % 3) % 3 = 1 * 0 % 3 = 0

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


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long res = 1;
    for (int i = 0; i < n; i++){
        res *= a[i];
    }
    cout << res % MOD << endl;
    // chi nhap thoi noi dung o tren
}
