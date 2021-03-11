#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  const double 	W02 = 1.10;
	const double 	W06 = 2.20;
	const double 	W10 = 3.70;
	const double 	W20 = 4.80;
  double rate, weight, distance, charge;

  cout << "Enter weight: ";
  cin >> weight;
  cout << "Enter distance: ";
  cin >> distance;

  if (weight < 0 || weight > 20) 
    exit(0);

  if (distance < 10 || distance > 3000)
    exit(0);

  if (weight <= 2 && distance > 500) {
    rate = W02;
  } 
  else if (weight <= 6 && distance > 500) {
    rate = W06;
  }
  else if (weight <= 10 && distance > 500) {
    rate = W10;
  }
  else if (weight <= 20 && distance > 500) {
    rate = W20;
  }
  else {
    if (distance < 500) {
      charge = rate;
    }
  }   
  
  charge = (distance / 500) * rate;

  cout << setprecision(2) << fixed;

  cout << "\nDistance: " << distance << "\n";
  cout << "Weight: " << weight << "\n";
  cout << "Charge: $" << charge << "\n";

}