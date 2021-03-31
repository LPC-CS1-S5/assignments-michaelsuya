#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

ofstream numbers;

numbers.open ("numbers.txt");

if (!numbers) {
  cout << "Open Error\n";
  exit(0);
}

int n = 10, num;

srand(time(0));

for (int i = 0; i < n - 1; i++) {
  
  num = rand() % 50;
  numbers << num << "\n";
  
  for (int i = 0; j < n - 1; j++) {
    if (j > j - 1 && j > j + 1)
      numbers << num << "\n";
  }

}

numbers.close();

}