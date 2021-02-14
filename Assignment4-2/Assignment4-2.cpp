#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

  int num1, num2, num3;
  int min, max, other;

  srand(time(0));
  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;

  min = num1;
  max = num3;

  if (num1 < num2) {
    if (num3 < num1) {
      min = num3;
      other = num1;
      max = num2;
    }
    else if (num3 < num2) {
      min = num1;
      other = num3;
      max = num2;
    }
    else {
      min = num1;
      other = num2;
      max = num3;
    }
  }
  else {
    if (num3 < num2) {
      min = num3;
      other = num2;
      max = num1;
    }
    else if (num3 < num1) {
      min = num2;
      other = num3;
      max = num1;
    }
    else {
      min = num2;
      other = num1;
      max = num3;
    }
  }

  cout << "The three numbers are " << num1 << ", " << num2 << ", and " << num3 << ".\n";
  cout << "Minimum: " << min << "\n";
  cout << "Other: " << other << "\n";
  cout << "Maximum: " << max << "\n";

}


