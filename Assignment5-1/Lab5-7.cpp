#include <iostream>
using namespace std;

int main(){

  int x = 2;
  int i = 0;
  int y;
  int result = 1;

  cout << "Enter y: ";
  cin >> y;

  while (i < y) {
    result *= x;
    ++i;
  }

  cout << result << "\n";

}