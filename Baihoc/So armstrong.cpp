#include<iostream>
#include<math.h>
using namespace std;

/*
    1023
    1. 102
    2. 10
    3. 1
    4. 0
    => co 4 chu so
 */
int CountDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}

// Kiem tra so armstrong
/*
    n = 1023
    => 1^4 + 0^4 + 2^4 + 3^4 so sánh v?i 1023

    1023 % 10 = 3
    1023 / 10 = 102
 */
bool isArmstrong(int n)
{	
	if (n == 0) {
		return false;
	}
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; // l?y ch? s? cu?i cùng
        tmp /= 10;       // b? ch? s? cu?i cùng
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
int main(){
    int a;
    std::cin >> a;
    std::cout << boolalpha << isArmstrong(a);
    return 0;
}
