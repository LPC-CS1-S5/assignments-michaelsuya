#include <iostream>
using namespace std;

int main(){

  int x = 2;
  int i = 0;
  int n;
  int result = 1;

  cout << "Enter n power: ";
  cin >> n;

  while (i < n) {
    result *= x;
    ++i;
  }

  cout << result << "\n";

}