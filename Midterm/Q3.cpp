#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

static int n2 = 51;

int isGreater(int);
int getRdnum();

int main() {

  ofstream numbers;

  numbers.open ("numbers.txt");

  if (!numbers) {
    cout << "Open Error\n";
    exit(0);
  }

  int n = 10;
  srand(time(0));

  for (int i = 1; i <= n; i++) {
    int r = getRdnum();
    cout << r << "\t";
    
    if (isGreater(r)) {
      numbers << r << "\t";
    }
    n2 = r;
  }

  numbers.close();
  
}

int getRdnum() {
  
  int num;
  
  num = rand() % 50 + 1;

  return num;
}

int isGreater(int n1) {
  if (n1 > n2)
    return 1;

  else 
    return 0;
}

