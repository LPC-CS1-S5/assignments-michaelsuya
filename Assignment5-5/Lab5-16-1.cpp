#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

ofstream studentrecord;

studentrecord.open ("stuRecord.txt");

if (!studentrecord) {
  cout << "Open Error\n";
  exit(0);
}
studentrecord << "Enter your name and your first and second scores.\n";

int n;
string name;
double score1, score2;

cout << "Enter number of students.\n";
cin >> n;

for (int i = 0; i < n; i++) {

  cout << "Student name: ";
  cin >> name;

  cout << "First score: ";
  cin >> score1;

  cout << "Second score: ";
  cin >> score2;
  
  studentrecord << name << " " << score1 << " " << score2 << endl;

}

studentrecord.close();

}