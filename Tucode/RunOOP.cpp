#include <iostream>
#include <string.h>
using namespace std;

struct Phanso{
	int x,y;
};

int main()
{
	Phanso p;
	p.x = 1;
	p.y = 0;
	cout << p.x << "/" << p.y;
	
	return 0;
}
