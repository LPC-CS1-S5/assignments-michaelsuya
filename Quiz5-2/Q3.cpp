#include <iostream>
using namespace std;

int main() {

  int i, j;
  bool isPrime;

  for (i = 5; i < 20; i++) {

    isPrime = true;

    for (j = 2; j <= i / 2; ++j) {

      if (i % j == 0) 
        isPrime = false;
        break;
    }

    if (isPrime == true) {
      
      cout << i << endl;

    }

  }

}