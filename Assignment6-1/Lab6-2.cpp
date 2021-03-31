#include <iostream>
#include <math.h>
using namespace std;

double nthpowerp(int n) {

  int nthpower;

  nthpower = pow(2, n);

  return nthpower;

}

double nthpowern(int n) {

  int nthpower, absn;

  absn = -1 * n;
  nthpower = 1/pow(2, absn);

  return nthpower;

}

void printout(int result) {

  cout << result << endl;

}

int main(){

  int i = 0;
  int n;
  int result;

  cout << "Enter n power: ";
  cin >> n; 

  if (n > 0) 
    result = nthpowerp(n);

  else if (n < 0)
    result = nthpowern(n);
  
  else 
    result = 1;

  printout(result);

}
    



