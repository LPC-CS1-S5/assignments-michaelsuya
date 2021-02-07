#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {

  double num1, num2, num3;
  double sum;
  double avg;

  srand(time(0));

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;
  sum = num1 + num2 + num3;
  avg = (num1 + num2 + num3)/3;

  std::cout << std::setprecision(2) << std::fixed;
  std::cout << sum << "\n";
  std::cout << avg << "\n";

}