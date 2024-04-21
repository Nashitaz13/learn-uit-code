#include<bits/stdc++.h>
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

// tinh to hop chap k cua n (0 <= k, n <= 1000)
// ket qua lay du voi 10^9 + 7
//Biomial Coefficient
int C[1000][1000];
//C[i][j]: to hop chap j cua i 
void init(){
    for (int i = 0; i <= 1000;i++){
        for (int j = 0; j <= i; j++){
            if(j == 0 || i == j){
                C[i][j] = 1;
            }
            else {
                C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
                C[i][j] %= MOD;
            }
        }
    }
}

//Tinh to hop chap k cua n (0 <= k; n <= 1000000)
//Ket qua lay du voi 10^9 + 7

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

//Chi ap dung khi m la snt
ll inverse(ll a, ll m){
    return powMod(a, m - 2, m);
}

ll f[1000001]; // dung luu giai thua

int main(){
/*    int t;
    cin >> t;
    init();
    while (t--){
        int n,k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    } */
    int t; cin >> t;
    while (t--){
    int n, k;
    cin >> n >> k;
    f[0] = 1; // 0! = 1;
    for (int i = 1; i <= n; i++){
        f[i] = i * f[i - 1];
        f[i] %= MOD;
    }
    cout << f[n] % MOD * inverse(f[k] * f[n - k] % MOD, MOD) % MOD << endl;
    }
    return 0;
}