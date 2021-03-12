#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

ifstream fileA;
fileA.open ("fA.txt", ifstream::in);

string line;
int min;
int max = 0;
int sum = 0;
int average = 0;
int counter = 1;

while (getline(fileA, line)) {

  int i = std::stoi(line);
    
  if (counter == 1) {
    min = i;
  }

  else {
    if (i < min) {
      min = i;
    }
  }

  if (i > max) {
    max = i;
  }

  sum += i;
  counter++;
  
 }

average = sum / counter;

cout << "Min: " << min << "\n";
cout << "Max: " << max << "\n";
cout << "Sum: " << sum << "\n";
cout << "Average: " << average << "\n";

}