

#include <math.h>
using namespace std;
int SoNguyenTo(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(double(n)); i++)
        if (n%i == 0) return 0;
    return 1;
}
#include <iostream>
void Input(int &n){
	cin >> n;
}
void InCacCapSoSinhDoi(int n){
	int cnt = 0;
	int a[1000];
 
  int idx = 0;
  for (int i = 1; i < n; ++i)
  {
    int val = i/2;
    bool no_div = true;
    for (int j = 2; j <= val; ++j)
    {
      if (i%j == 0)
      {
        no_div = false;
        break;
      }
    }
 
    if (no_div == true)
    {
      a[idx] = i;
      idx++;
    }
  }
  for (int t = 0; t < idx-1; t++)
  {
    int n1 = a[t];
    int n2 = a[t+1];
    if ((n2-n1) == 2)
    {
    	cout << n1 << ", " << n2;
    	cout << "\n";
    	cnt++;
    }
  }
	
	cout << "Tong: " << cnt << " cap so sinh doi < " << n;
}

int main() {
    int a;
    Input(a);
    InCacCapSoSinhDoi(a);
    return 0;
}


