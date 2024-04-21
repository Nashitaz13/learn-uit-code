#include <iostream>
#include <math.h>
#include <string>

using namespace std;

long long gcd(long long a, long long b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    long long a,b;
    cin >> a >> b;
    if (gcd(a, b))
        cout << "yes";
    else cout << "no";
    return 0;
}