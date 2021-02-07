#include <iostream>
#include <string>
#include <iomanip>

int main() {

  std::string m1, m2, m3;
  double r1, r2, r3;
  double avg;

  std::cout << std::setprecision(2) << std::fixed;
  std::cout << "Enter the first month and rain amount: \n";
  std::cin >> m1;
  std::cin >> r1;
  std::cout << "Enter the second month and rain amount: \n";
  std::cin >> m2;
  std::cin >> r2;
  std::cout << "Enter the third month and rain amount: \n";
  std::cin >> m3;
  std::cin >> r3;

  avg = (r1 + r2 + r3)/3;

  std::cout << "\nThe average rain fall for " << m1 << ", " << m2 << ", and " << m3 << " is " << avg << ".\n";


}