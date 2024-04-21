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

string chuan(string name){
	stringstream ss(name);
	string res = "";
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.length(); i++) res += tolower(token[i]);
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}


int cnt = 0;
class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
		
	public:
		SinhVien(){
			ma = ten = lop = ns = "";
			gpa = 0;
		}
		friend ostream& operator << (ostream& out, const SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			++cnt;
			string tmp = to_string(cnt);
			tmp = string(3 - tmp.size(), '0') + tmp;
			a.ma = "B20DCCN" + tmp;
			in.ignore();
			getline(in, a.ten);
			a.ten = chuan(a.ten);
			in >> a.lop >> a.ns >> a.gpa;
			if(a.ns[2] != '/') a.ns = "0" + a.ns;
			if(a.ns[5] != '/') a.ns.insert(3, "0");
			return in;
		}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}