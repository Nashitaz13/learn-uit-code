#include <iostream>
#include <math.h>

using namespace std;

int phi(int n){
    int res = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            res = res - res / i; // res = res * (1 - 1 / i)
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1){
        res -= res / n;
    }
    return res;
}

int main(){
    cout << phi(60) << endl;
}