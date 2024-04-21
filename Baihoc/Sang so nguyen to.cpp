
#include <bits/stdc++.h>
using namespace std;
//sang nguyen to khong vuot qua n
//phai tao dc 1 mang co kich thua la n + 1 phan tu

int prime[1000001];

void sieve(){
	//Coi tat ca cac so tu 0 toi n la so nguyen to
	// prime[i] = 1 -> i la snt
	//prime[i] = 0 -> i ko la snt
	for (int i = 0; i<= 1000000; i++)
	       prime [i] = 1;
	//Loai 0 va 1 (loai thu cong)
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= 1000; i++){
		//Neu i la so nguyen to
		if(prime[i]){
			//Duyet all cac boi so cua i va cho no khong la so nguyen to
			for (int j = i*i; j <= 1000000; j += i){
				prime[j] = 0;//j khong con la so nguyen to nua
			}
		}
	}
}

int main(){
	sieve();
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++){
		if (prime[i]){
			cout << i << " ";
		}
	}
	return 0;
}
