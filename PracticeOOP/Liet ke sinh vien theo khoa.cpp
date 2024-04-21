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

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend ostream& operator << (ostream& out, SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
			return out;
		}
		
		friend istream& operator >> (istream& in, SinhVien &a){
			in >> a.ma;
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.email;
			return in;
		}
		
		friend bool operator < (SinhVien a, SinhVien b){
			return a.ma < b.ma;
		}
		string getlop(){
			return lop;
		}
		
};


int main(){
	map<int,vector<SinhVien>> mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp; cin >> tmp;
		int khoa = stoi(tmp.getlop().substr(1, 2));
		mp[khoa].push_back(tmp);
	}
	int q; cin >> q;
	while(q--){
		int khoa; cin >> khoa;
		cout << "DANH SACH SINH VIEN KHOA " << khoa << ":\n";
		for(SinhVien x : mp[khoa % 100]){
			cout << x;
		}
	}
	return 0;
}


