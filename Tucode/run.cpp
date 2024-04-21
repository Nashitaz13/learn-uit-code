#include <bits/stdc++.h>

using namespace std;


int main(){
	int a = 12;
	int b = 36;
	int temp = a*2 + b/3 > b ? (a - b) > (a + b)/2 ? 1 : 2 : (b - a) < (a + b)/2 ? 3 : 4;
	//int temp = (a * 2 + b / 3 > b) ? ((a - b) > (a + b) / 2 ? 1 : 2) : ((b - a) < (a + b) / 2 ? 3 : 4);
	cout << temp << endl;
	int n;
	cin >> n;
	int res = (n = 0 ? n - 1 : (n = 2) ? 3 : 4);
	cout << res << endl;
	return 0;
}
