#include <conio.h>
#include <iostream>
 
int main()
{
  int a[1000];
 
  int idx = 0;
  for (int i = 1; i < 1000; ++i)
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
 
  std::cout << "\n Cac cap so sinh doi < 1000 la:" << std::endl;
  for (int t = 0; t < idx-1; t++)
  {
    int n1 = a[t];
    int n2 = a[t+1];
    if ((n2-n1) == 2)
    {
      std::cout << "("<< n1 << "-" << n2 << ")";
      std::cout << "\n";
    }
  }
 
  _getch();
  return 0;
}
 
