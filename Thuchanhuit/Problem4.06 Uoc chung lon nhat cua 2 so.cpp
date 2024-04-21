#include <iostream>
#include <string>
#include <math.h>

#define ll long long
using namespace std;

void intput(int &n){
	cin >> n;
}

ll input(){
	ll m;
	cin >> m;
	return m;
}
ll gcd(ll a, ll b){
    while (b != 0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}// hieu qua nhat

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b; // a*b/gcd(a,b);
}


int main() {
	int m, n;
	intput(n);
	m=input();
	cout << gcd(m, n);
}
