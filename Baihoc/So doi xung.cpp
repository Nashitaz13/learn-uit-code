#include <iostream>
//So doi xung

bool is_SoDoiXung(int n){
	int r, s = 0; // r la chu so cuoi cung cua n, s la so dao nguoc cua n
	int m = n; // gan m la ban sao cua n
	while (m != 0){
		r = m % 10; // lay chu so cuoi cung cua m
		s = s * 10 + r; // them r vao so dao nguoc
		m = m / 10; // loai bo chu so cuoi cung cua m
	}
	return (s == n); // ve true neu s = n, false neu s != n;
}

int main(){
	int n;
    std::cin >> n;
    if (is_SoDoiXung(n))
        std::cout << std::boolalpha << true;
    else
        std::cout << std::boolalpha << false;
    return 0;
}
