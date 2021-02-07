#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  double  a = 15.00, b = 12.00, c = 9.00;
  double seat_a, seat_b, seat_c;
  double a_income, b_income, c_income;
  double total;

  cout << "How many Class A seats were sold?\n";
  cin  >> seat_a;
  cout << "How many Class B seats were sold?\n";
  cin >> seat_b;
  cout << "How many Class C seats were sold?\n";
  cin >> seat_c;

  a_income = seat_a * a;
  b_income = seat_b * b;
  c_income = seat_c * c;
  total = a_income + b_income + c_income;

  cout << setprecision(2) << fixed;
  cout << "Class A income: " << a_income << endl;
  cout << "Class B income: " << b_income << endl;
  cout << "Class C income: " << c_income << endl;
  cout << "Total: " << total << endl;
  

}