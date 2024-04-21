#include<iostream>
#include<math.h>
using namespace std;

bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if (n % 2 == 0)
			return false;
	}
	return n > 1;
}

int sum_common_prime(int &m, int &n){
	int S = 0;
	int min = (m<n)?	 m:n;
	for (int i = 2;i <= min; i++){
		if ((m % i == 0) && (n % i == 0)){
			if (nt(i)){
				S = S + i;
			}
		}
	}
	if (S != 0){
		return S;
	} else {
		return -1;
	}
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
	return 0;
}
