#include <iostream>
#define MAXN 100

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void XuatMang(int A[], int N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << "\t";
}

void XoaTrungNhau(int A[],int &N){
	int temp[N];
	int cnt = 0;
	for (int i = 0; i < N; i++){
		bool check = false;
		for (int j = 0; j < cnt; j++){
			if (A[i] == temp[j]){
				check = true;
				break;
			}
		}
		if (!check){
			temp[cnt] = A[i];
			cnt++;
		}
	}
	N = cnt;
	for (int i = 0; i < N; i++){
		A[i] = temp[i];
	}
}

int main() {
    int a[MAXN], n;
    NhapMang(a, n);
    XoaTrungNhau(a, n);
    XuatMang(a, n);
    return 0;
}

