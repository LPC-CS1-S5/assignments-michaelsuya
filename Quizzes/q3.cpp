#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main(){

  double n1, n2, n3;
  double sum;
  double avg;

  srand(time(0));

  n1 = rand() % 100;
  n2 = rand() % 100;
  n3 = rand() % 100;
  sum = n1 + n2 + n3;
  avg = (n1 + n2 + n3)/3;

  std::cout << std::setprecision(5) << std::fixed;
  std::cout << "Num1: " << n1 << "\n";
  std::cout << "Num2: " << n2 << "\n";
  std::cout << "Num3: " << n3 << "\n";
  std::cout << "Sum: " << sum << "\n";
  std::cout << "Avg: " << avg << "\n";

}