#include<iostream>
void Input(int &n){
std::cin >> n;
}
int KiemTraSoHoanHao(int &n){
    int i = 1;
    int S = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
           S = S + i;
        }
            i++;
    }
    if(S == n){
    return 1;
    } else {
    return 0;
    }
}
int main() {
    int n;

    Input(n);

    std::cout << KiemTraSoHoanHao(n);

    return 0;
}

