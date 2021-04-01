#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

ofstream emprecord;
emprecord.open ("employee.txt");

if (!emprecord) {
  cout << "Open Error\n";
  exit(0);
}

int n, ID;
string name, department;
double salary;

cout << "Enter number of employees.\n";
cin >> n;

for (int i = 0; i < n; i++) {

  cout << "Employee ID: ";
  cin >> ID;
  
  cout << "Employee name: ";
  cin >> name;

  cout << "Department name: ";
  cin >> department;

  cout << "Salary: ";
  cin >> salary;
  
  emprecord << "Employee ID: " << ID << " " << "Name: " << " " << name << " " << department << " " << salary << endl;

  } 
}