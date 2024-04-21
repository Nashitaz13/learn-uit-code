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
	
	friend bool operator < (NhanVien a, NhanVien b){
		string s1 = a.ns, s2 = b.ns;
		int ng1 = (s1[0] - '0') * 10 + s1[1] - '0', t1 = (s1[3] - '0') * 10 + s1[4] - '0', n1 = stoi(s1.substr(6));
		int ng2 = (s2[0] - '0') * 10 + s2[1] - '0', t2 = (s2[3] - '0') * 10 + s2[4] - '0', n2 = stoi(s2.substr(6));
		if(n1 != n2) return n1 < n2;
		if(ng1 != ng2) return ng1 < ng2;
		return t1 < t2;
	}
};

int NhanVien::cnt = 0;

void sapxep(NhanVien a[], int n){
	sort(a, a + n);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}