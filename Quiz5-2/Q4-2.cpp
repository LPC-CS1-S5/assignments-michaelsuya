#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

int main() {

ifstream emprecord;

emprecord.open("employee.txt", ifstream::in);

if (!emprecord) {
  cout << "Open error\n";
  exit(0);
  }

string line;
double salary;
double sum = 0;
double average = 0;
int counter = 0;

while (getline(emprecord, line)) {

  stringstream ss (line);
  string ID; 
  getline(ss, ID, ' ');
  string name; 
  getline(ss, name, ' ');
  string department; 
  getline(ss, department, ' ');
  string salary;
  getline(ss, salary, ' ');
  double esalary = stoi(salary);

  sum += esalary;
  counter ++;

  cout << ID << " " << name << " " << department << " " << salary << endl;
  
 }

average = sum / counter;

cout << "Total: " << sum << endl;
cout << "Average: " << average << endl;

}