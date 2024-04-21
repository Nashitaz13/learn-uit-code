#include<iostream>
#define MAXN 100


void Input(int a[], int &n){
	std::cin >> n;
	for (int i = 0; i < n; i++) {
	std::cin >> a[i];
	}
}
bool check(int &n){
    int i = 1;
    int S = 0;
    while(i < n)
    {
        if(n % i == 0)
        {
           S = S + i;
        }
            i++;
    }
    if(S == n){
    return true;
    } else {
    return false;
    }
}

int DemSoHoanHao(int a[], int n){
	int cnt = 0;
	for (int i = 0;i < n; i++){
		if (check(a[i])) {
			cnt++;
		}
	}
	return cnt;
}
int main() {
    int a[MAXN], n;
    Input(a, n);
    std::cout << DemSoHoanHao(a, n);
    return 0;
}

