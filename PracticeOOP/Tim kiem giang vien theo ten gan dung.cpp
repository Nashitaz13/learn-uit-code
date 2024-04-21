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

string chuan(string bm){
	string res = "";
	stringstream ss(bm);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
	}
	return res;
}

string getname(string name){
	string res, token;
	stringstream ss(name);
	while(ss >> token){
		res = token;
	}
	return res;
}

class GiangVien{
	private:
		string ten, bm, ma;
		static int cnt;
	public:
		void nhap();
		void in();
		string getTen(){
			return ten;
		}
		string getMa(){
			return ma;
		}
};

int GiangVien::cnt = 0;
void GiangVien::nhap(){
	++cnt;
	string s = to_string(cnt);
	if(s.size() < 2) s = "0" + s;
	ma = "GV" + s;
	getline(cin, ten);
	getline(cin, bm);
}

void GiangVien::in(){
	cout << ma << " " << ten << " " << chuan(bm) << endl;
}

bool tim(string name, string word){
	for(char &x : name) x = tolower(x);
	for(char &x : word) x = tolower(x);
	return name.find(word) != string::npos;
}

int main(){
	int n; cin >> n;
	scanf("\n");
	GiangVien a[n];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	int q; cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ": \n";
		for(GiangVien x : a){
			if(tim(x.getTen(), s)){
				x.in();
			}
		}
	}
}

//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//1
//aN