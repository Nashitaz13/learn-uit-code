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
		string getma(){
			return ma;
		}
		string getlop(){
			return lop;
		}
};

void viethoa(string &s){
	for(char &x : s){
		x = toupper(x);
	}
}
int main(){
	map<string,vector<SinhVien>> mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp; cin >> tmp;
		string nganh = tmp.getma().substr(5, 2);
		mp[nganh].push_back(tmp);
	}
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string ng;
		getline(cin, ng);
		viethoa(ng);
		cout << "DANH SACH SINH VIEN NGANH " << ng << ":\n";
		if(ng == "KE TOAN"){
			for(SinhVien x: mp["KT"]){
				cout << x;
			}
		}
		else if(ng == "CONG NGHE THONG TIN"){
			for(SinhVien x: mp["CN"]){
				if(x.getlop().find("E") == string::npos)
					cout << x;
			}
		}
		else if(ng == "AN TOAN THONG TIN"){
			for(SinhVien x: mp["AT"]){
				if(x.getlop().find("E") == string::npos)
					cout << x;
			}
		}
		else if(ng == "VIEN THONG"){
			for(SinhVien x: mp["VT"]){
				cout << x;
			}
		}
		else if(ng == "DIEN TU"){
			for(SinhVien x: mp["DT"]){
				cout << x;
			}
		}
	}
	return 0;
}
