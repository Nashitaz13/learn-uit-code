#include <iostream>
using namespace std;

int main(){
    int i, n, sphu;
    cin >> n;
    float S = 0;
    i = 1;
    sphu = 0;
   /* for (i = 1; i <= n; i++){
        sphu = sphu + i;
        S = 1.0/sphu;
    } // i = 1 => sphu = 1 => S = 1 -> i = 2 => sphu = 1 + 2 => S = 1/ */
    while (i <= n){
        sphu = sphu + i;
        S = 1.0/sphu;
        i++;
    }
    cout << S;
    return 0;
}