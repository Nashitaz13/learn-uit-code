#include <iostream>
#include <math.h>
#include <string>
#define ll long long

using namespace std;

ll pow1(int a, int b){
    int res = 1;
    for (int i = 1;i <= b;i++){
        res *= a;
    }
    return res;
} // O(n)

// a^b =a^(b/2) * a^(b/2) if b chan
//     =a^(b/2) * a^(b/2) * a if b le

ll pow2(int a, int b){
    ll res = 1;
    while(b){
        if (b % 2 == 1){
            res *= a;
        }
        b /= 2;
        a *= a;
    }
    return res;
}

ll pow3(int a, int b){
    if(b == 0){
        return 1;
    }
    ll x = pow3(a, b/2);
    if (b % 2 == 1){
        return x*x*a;
    } else {
        return x*x;
    }
} // chia de tri

int main(){
    int a, b;
    cin >> a >> b;
    cout << pow1(a,b) << endl;
    cout << pow2(a,b) << endl;
    cout << pow3(a,b) << endl;
}
