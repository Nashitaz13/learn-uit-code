
#include <iostream>
#include <math.h>

void NhapMang(int *&, int &);
void XuatMang(int *, const int &);
bool kiemTraSNT(const int &);
int TongCacSoNguyenTo(int *, const int &);

int main() {
    int *a, n;
    NhapMang(a, n);
    std::cout << TongCacSoNguyenTo(a, n);
    return 0;
}
void NhapMang(int *&a, int &n){
	std::cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
	}
}

bool kiemTraSNT(const int &n){
    bool isPrime = true;
   if (n <= 1) {
    isPrime = false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      isPrime = false;
    }
  }
  return isPrime;
}

int TongCacSoNguyenTo(int *a, const int &n){
    int s = 0;
    for (int i = 0; i < n; i++){
        if (kiemTraSNT(a[i])) {
            s = s + a[i];
        }
    }
    return s;
}
