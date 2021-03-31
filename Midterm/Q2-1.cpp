#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

ofstream studentrecord;

studentrecord.open ("students.txt");

if (!studentrecord) {
  cout << "Open Error\n";
  exit(0);
}

int n;
string name;
double score1, score2;

cout << "Enter number of students.\n";
cin >> n;

for (int i = 0; i < n; i++) {

  cout << "Student name: \n";
  cin >> name;

  cout << "Scores: ";
  cin >> score1 >> score2;
  
  studentrecord << name << endl; 
  studentrecord << score1 << " " << score2 << endl;

}

studentrecord.close();

}