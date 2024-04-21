#include <set>
#define MAXN 100
#include<iostream>

bool is_MangCon(int *A, int na, int *B, int nb) {
    std::multiset<int> B_set(B, B + nb); // Chuyen doi mang B thanh multiset
    for (int i = 0; i < na; i++) {
        auto it = B_set.find(A[i]);
        if (it == B_set.end()) // Neu A[i] khong ton tai trong B_set, tra ve false
            return false;
        else
            B_set.erase(it); // Xoa A[i] khoi B_set
    }
    return true; // Neu tat ca cac phan tu cua A deu ton tai trong B_set, tra ve true
}
void NhapMang(int a[], int &n){
	std::cin >> n;
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
	}
}
int main() {
    int a[MAXN], na, b[MAXN], nb;
    NhapMang(a, na);
    NhapMang(b, nb);
    if (is_MangCon(a, na, b, nb) == true)
        std::cout << "true";
    else
        std::cout << "false";
    return 0;
}
