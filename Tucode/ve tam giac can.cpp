#include <iostream>
using namespace std;

int main()
{
    int n; int q = 0;
	cin >> n;
if(n >= 3 && n <= 10){
    while (n > 0)
    {
        for (int i = 1; i < n; i++)
            cout << "  ";
        for (int k = 0; k <= q; k ++)
            cout << "*" << " ";
        n -- ;
        q += 2 ;
        cout << endl;
    }
} else {
	cout << "Khong thoa dieu kien nhap.";
}
    return 0;

}
