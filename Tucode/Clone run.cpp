#include <iostream>
using namespace std;

long long calc(long long init, char type, int power){
    if (type == '+'){
        return init + power;
    }else if (type == '-'){
        return init - power > 0 ? init - power : 0;
    }else if (type == '*'){
        return init * power;
    }else if (type == '/'){
        return init / power;
    }
    return -1;
}

int main(){
    long long x, n, xa, xb;
    cin >> x >> n;
    char a, c;
    int b, d;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        xa = calc(x, a, b);
        xb = calc(x, c, d);
        x = xa > xb ? xa : xb;
    }
    cout << x << endl;
}