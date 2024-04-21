#include <iostream>

using namespace std;

int main() {
  int number;
  bool isPrime = true;
  cin >> number;
  if (number <= 1) {
    isPrime = false;
  }
  for (int counter = 2; counter <= number / 2; counter++) {
    if (number % counter == 0) {
      isPrime = false;
    }
  }
  if (isPrime) {
    cout << "prime";
  } else {
    cout << "not prime";
  }
  return 0;
}
