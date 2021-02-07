#include <iostream>

int main() {
  double Celsius, Fahrenheit;

  std::cout << "Enter the temperature by Celsius:\n";
  std::cin >> Celsius;

  Fahrenheit = 9/5.0 * Celsius + 32;

  std::cout << "Celsius " << Celsius << " is " << Fahrenheit << " Fahrenheit.\n";


}