#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double price = 99;
  int numsold;
  double originalprice;
  double discount;
  double discountamount;
  double totalprice;
  
  cout << "Enter units sold: ";
  cin >> numsold;

  cout << setprecision(2) << fixed;

  if (numsold < 10) {
    cout << "No discounts available!\n";
  }

  else if (numsold <= 19) {
    discount = .2;
  }
  else if (numsold <= 49){
    discount = .3;
  }
  else if (numsold <= 99) {
    discount = .4;
  }
  else {
    if (numsold >= 100) {
      discount = .5;
  	}
  }
      originalprice = numsold * price;
      discountamount = discount * originalprice;
      totalprice = originalprice - discountamount;
      cout << "The original price is $" << originalprice << "\n";
      cout << "Your discount is $" << discountamount << "\n";
      cout << "The discounted price is $" << totalprice << "\n";

  }