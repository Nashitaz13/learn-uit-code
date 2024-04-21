#include <iostream>

int ChuSoNhoNhat(int n){
	if (n >= 0 && n <= 9){
		return n;
	}
	if ((n % 10) < ChuSoNhoNhat(n / 10)){
		return n % 10;
	} else return ChuSoNhoNhat(n/10);
}

int main(){
    int a;
    std::cin >> a;
    std::cout << ChuSoNhoNhat(a);
    return 0;
}
