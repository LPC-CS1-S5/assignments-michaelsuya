#include <iostream>
#include <fstream>
#include <string>
using namespace std;

static int n1, n2;
static int d1;

void getInput();
int isSame(int, int);
int intDivision(int, int);
int fileWrite(int);

int main() {

  getInput();

  if (!isSame(n1, n2)) {
    intDivision(n1,n2);
    fileWrite(d1);
  }
}

void getInput() {
  cout << "Enter n1: \n";
  cin >> n1;
  cout << "Enter n2: \n";
  cin >> n2;
}

int isSame(int n1, int n2) {
  if (n1 == n2)
    return 1;

  else 
    return 0;
}

int intDivision(int n1, int n2) {
  if (n1 > n2) {
    d1 = n1/n2;
    return d1;   
  }
  else {
    d1 = n2/n1;
    return d1;   
  } 
}

int fileWrite(int) {
  ofstream question5;

  question5.open ("question5.txt");

  if (!question5) {
    cout << "Open Error\n";
    exit(0);
  }

  question5 << d1; 

  question5.close();
}

/* I tested each function individually in the man function to see if they worked then I put the pieces together and tried running it all.*/