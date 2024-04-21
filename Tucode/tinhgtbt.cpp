
#include <iostream>
#include <cmath>

int main(){
    float x, kq;
    std::cin >> x;
	if (x < - 10){
		kq = x*x*x - 2*x + 1.0/x;
	} else if (x >= -10 && x <= 10){
		kq = exp(x);
	}
	else if (x > 10){
		kq = x + sqrt(x);
	}
    std::cout << kq;
    return 0;
}

