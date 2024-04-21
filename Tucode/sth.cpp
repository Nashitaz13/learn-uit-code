#include <iostream>
using namespace std;

int main(){
    int n;
    int S = 0;
    int i = 1;
    cin >> n;
    while (i <= n){
        if (i % 2 != 0){
        S += i;
        }
        i++;
    }
    cout << S;
    return 0;
}