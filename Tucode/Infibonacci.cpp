
#include <iostream>
using namespace std;
int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int cnt(int &n){
	int dem = 0;
	for (int i = fibonacci(0); i < n; fibonacci(i++)){
		dem++;
	}
	return dem;
}
void DaySoFibonacci(int &n){
	int i = 0;
	int dem = cnt(n);
	while (fibonacci(i) < n){
		if (dem == 1){
			cout << fibonacci(i);
			break;
		}
		if ((fibonacci(i) == 0) && cnt(n) > 1){
			cout << fibonacci(i) << ", ";
		}
		else if ((fibonacci(i) >= fibonacci(dem - 1)) && (fibonacci(i) <= fibonacci(dem))){
			cout << ", " << fibonacci(i);
		}
		else {
			cout << fibonacci(i) << ", ";
		}
		i++;
	}
}

int main() {
    int m;

    cin >> m;

    DaySoFibonacci(m);

    return 0;
}
