#include <iostream>
using namespace std;

int main() {

  for (int i = 0; i <= 2; i++) {

    for (int j = 0; j <= i; j++) {

      cout << i << " , "  << j << "\n";

    }

  }

  for (int k = 0; k <= 2; k++) {

    for (int l = k; l <= 2; l++) {

      cout << k << " , "  << l << "\n";

    }

  }

   for (int m = 0; m <= 2; m++) {

    for (int n = 2; n >= 0 ; n--) {

      cout << m << " , "  << n << "\n";

    }

  }
  
}