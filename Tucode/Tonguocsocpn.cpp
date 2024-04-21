#include <iostream>
#include <math.h>

using namespace std;
void Input(int &n){
	cin >> n;
}
bool cp(int n){
	if (sqrt((float)n) == (int)sqrt((float)n)) 
    {
    	return n >=1;
    } else {
    	return false;
	}
}
int sum_all_square(int &n){
	int S = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0 && cp(i)){
			S += i;
		}
	}
		return S;	
}
int main() {
    int n;
    Input(n);
    cout << sum_all_square(n);
}
