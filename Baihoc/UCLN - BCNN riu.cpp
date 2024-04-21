#include <iostream>
#include <string>
#include <math.h>

#define ll long long
using namespace std;

ll gcd1(ll a, ll b){
    if (a == 0 || b == 0){
        return a + b;
    }
    for (int ll i = min(a,b); i >= 1; i--){
        if (a % i == 0 && b % i == 0){
            return i;
        }
    }
} // cach lam thong thuong tim ucln cua hai so
// gcd(a,b) = gcd(b, a - b) (a > b)
// gcd(20,30) = gcd(20,10) = gcd(10,10) -> 10

ll gcd2(ll a, ll b){
    if (a == 0 || b == 0) return a + b;
    while (a != b){
        if (a > b){
            a = a - b;
        } else
            b = b - a;
    }
    return a;
} // voi khoang cach 2 so rat lon thi rat la lau

ll lcm(ll a, ll b){
    return a/gcd2(a,b)*b; // a*b/gcd(a,b);
}

//gcd(a,b) = a if b == 0
// = gcd(b, a % b) if b != 0
// gcd(8,18) = gcd(18, 8) = gcd(8,2) = gcd(2, 0) = 2
ll gcd(ll a, ll b){
    while (b != 0){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}// hieu qua nhat

ll gcd_dequy(ll a, ll b){
    if (b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a,b) << endl;
}