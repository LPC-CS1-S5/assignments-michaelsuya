#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int a = 15, b = 12, c = 9;
  int seat_a, seat_b, seat_c;
  int a_income, b_income, c_income;
  int total;

  cout << "How many Class A seats were sold? ";
  cin  >> seat_a;
  cout << "How many Class B seats were sold? ";
  cin >> seat_b;
  cout << "How many Class C seats were sold? ";
  cin >> seat_c;

  a_income = seat_a * a;
  b_income = seat_b * b;
  c_income = seat_c * c;
  total = a_income + b_income + c_income;

  cout << "Class A income: " << a_income << endl;
  cout << "Class B income: " << b_income << endl;
  cout << "Class C income: " << c_income << endl;
  cout << "Total: " << total << endl;

  

}