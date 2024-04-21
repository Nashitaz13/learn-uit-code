#include<bits/stdc++.h>

using namespace std;

int main() {

  int rows;
  // Getting dimensions of rectangle.

  cin >> rows;
	if (rows >= 3 && rows <= 20){
  // Main logic to print hollow rectangle. 
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {

      // If the index is at the border, then print *. 
      if (i == 0 || i == rows - 1 || j == 0 || j == rows - 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
} else {
	cout << "Khong thoa dieu kien nhap.";
}
  return 0;
}	
