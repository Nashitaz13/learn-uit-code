#include <iostream>
#include <cmath>

double TinhTong_12(int n) {
	if (n == 2){
		return std::sqrt(2);
	} else {
		return std::pow(n + TinhTong_12(n - 1), 1.0/n);
	}
}

int main(){
    int n;
    
    std::cin >> n;
        
    std::cout << TinhTong_12(n);
    
    return 0;
}

