#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
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
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

class DN{
	private:
		string ma, ten;
		int sl;
	public:
		void nhap(){
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			cin >> sl;
		}
		void in(){
			cout << ma << " " << ten << " " << sl << endl;
		}
		string getma(){
			return ma;
		}
		int getsl(){
			return sl;
		}
};

bool cmp(DN a, DN b){
	if(a.getsl() != b.getsl())
		return a.getsl() > b.getsl();
	return a.getma() < b.getma();
}

int main(){
	int n; cin >> n;
	DN a[n];
	for(int i = 0; i < n; i++) a[i].nhap();
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++) a[i].in();
	return 0;
}

//4
//VIETTEL
//TAP DOAN VIEN THONG QUAN DOI VIETTEL
//40
//FSOFT
//CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
//300
//VNPT
//TAP DOAN BUU CHINH VIEN THONG VIET NAM
//200
//SUN
//SUN*
//50
