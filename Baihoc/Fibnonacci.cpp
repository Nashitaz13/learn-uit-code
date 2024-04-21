#include <iostream>
#include <math.h>
#define ll long long

using namespace std;

// Fibonacci, n >= 92 thi no thuoc long long roi
// 94 tran cmn so roi
void solve(ll n){
    cout << 0 << " " << 1 << " ";
    ll fn2 = 0, fn1 = 1;
    for (int i = 3; i <= n;i++){
        ll fn = fn1 + fn2;
        cout << fn << " ";
        fn2 = fn1;
        fn1 = fn;
    }
}

void solve2(int n){
    ll fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n;i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; i < n; i++){
        cout << fibo[i] << " ";
    }
}

// cach check fibonacci : 5n^2 + 4 || 5n^2 - 4 la so chinh phuong
// cach nay ap dung cho so nho
// cach khac: tu fibo tu 1 toi 93 roi check co trong do hay k la dc

int check(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    ll fn2 = 0, fn1 = 1;
    for(int i = 3;i <= 93;i++){
        ll fn = fn1 + fn2;
        if (fn == n){
            return 1;
        }
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

int main(){
    int t;
    t = 1;
    while (t--){
        int n;
        cin >> n;
        solve(n);
    }
    cout << endl;

    int b;
    cin >> b;
    while (b--){
        long long k;
        cin >> k;
        if (check(k)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
