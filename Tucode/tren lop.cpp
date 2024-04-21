#include <iostream>

void NhapMang(int *&a, int &n){
	std::cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
	}
}

bool is_MangDoiXung(int *a, int n){
	if (n == 0){
		return false;
	}
	for (int i = 0; i < n / 2; i++){
		if (a[i] != a[n - i - 1]){
			return false;
		}
	}
	return true;
}


int main() {
    int *a, n;
    NhapMang(a, n);
    if (is_MangDoiXung(a, n) == true)
        std::cout << "Mang doi xung.";
    else
        std::cout << "Mang khong doi xung.";
    return 0;
}

