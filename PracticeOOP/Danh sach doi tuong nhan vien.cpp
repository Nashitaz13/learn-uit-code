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


class NhanVien{
	private:
		string ten, gt, ns, dc, mst, hd;
		int ma;
	public:
		static int cnt;
	
	friend ostream& operator << (ostream &out, NhanVien a){
		out << setfill('0') << setw(5) << a.ma << " " << 
		a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
		return out;
	}
	
	friend istream& operator >> (istream &in, NhanVien &a){
		++cnt;
		a.ma = cnt;
		in.ignore();
		getline(in, a.ten);
		in >> a.gt >> a.ns;
		in.ignore();
		getline(in, a.dc);
		in >>a.mst >> a.hd;
		return in;
	}
};

int NhanVien::cnt = 0;

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


