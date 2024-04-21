#include <iostream>
#include <math.h>
#include <string>
// dem so luong cac so nguyen to cung nhau voi n khong vuot qua n
using namespace std;

long long gcd(long long a, long long b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long count(long long n){
    long long res = 0;
    for (int i = 1; i <= n; i++){
        if(gcd(i, n) == 1){
            ++res;
        }
    }
    return res;
}

long long phi(long long n){
    long long res = n;
    for(int i = 2; i <= sqrt(n);i++){
        if (n % i == 0){
            while (n % i == 0) n /= i;
            res -= res/i;
        }
    }
    if (n != 1){
        res -= res/n;
    }
    return res;
}

int main(){
    long long a;
    cin >> a;
    cout << count(a) << endl;
    cout << phi(a) << endl;
    return 0;
}