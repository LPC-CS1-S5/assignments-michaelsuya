#include <iostream>
using namespace std;

int main() {

  int x = 2;
  int i = 0;
  int n, r;
  int result = 1;

  cout << "Enter power n: ";
  cin >> n;

  cout << "Enter range r: ";
  cin >> r;

  while (i < n) {
    result *= x;

    if (result < r) {

      cout << result << "\n";

    }

    i++;
  }

}