#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main() {

ofstream fileA ("fA.txt");

if (!fileA) {
  cout << "Open Error\n";
  exit(0);
}

int n, num;

cout << "Enter number of integers.\n";
cin >> n;

srand(time(0));

for (int i = 0; i < n; i++) {

  num = rand() % 100;
  fileA << num << "\n";

 }

 fileA.close();

}