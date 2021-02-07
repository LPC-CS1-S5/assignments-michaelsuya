#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double quotient, number1 = 132.364, number2 = 26.91;

  quotient = number1 / number2;
  cout << setprecision(5) << quotient << endl;
  cout << setprecision(4) << quotient << endl;


}