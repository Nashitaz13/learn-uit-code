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

ll f[1000001];
void init(){
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i<= 1000000;i++){
        f[i] = f[i - 1] + f[i - 2];
        f[i] %= MOD;
    }
}// O(n)

//Nhan a*b, sau do luu ket qua lai cho ma tran a
void nhan(ll a[2][2], ll b[2][2]){
    ll res[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            res [i][j] = 0;
            for (int k = 0; k < 2; k++){
                res[i][j] += a[i][k] * b[k][j] % MOD;
                res[i][j] %= MOD;
            }
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            a[i][j] = res[i][j];
        }
    }
}

//Tinh so fibonacci thu n
void pow1(ll n){
    ll res[2][2] = {{1, 0}, {0, 1}};
    ll a[2][2] = {{1, 1}, {1, 0}};
    while(n){
        if (n % 2 == 1){
            nhan(res, a);
        }
        nhan(a, a);
        n /= 2;
    }
    cout << res[0][1] << endl;
} //O(logn)

int main(){
/*    init();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << f[n] << endl;
    } */
    ll n;
    cin >> n;
    pow1(n);
    return 0;
}