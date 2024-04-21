
#include <iostream>

long long TinhTong_1(int n){
	if (n == 1) return 1;
	return n + TinhTong_1(n-1);
}

int main(){
    int n;
    std::cin >> n;
    
    std::cout << TinhTong_1(n);

    return 0;
}

