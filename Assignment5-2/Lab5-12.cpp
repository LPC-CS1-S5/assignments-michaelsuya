#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  
double n, score, nscore, tscore;
double average, sum;
string name;

cout << "Enter number of students:  ";
cin >> n;

cout << setprecision(2) << fixed;

for (int i = 0; i < n; i++) {

  cout << "Enter student's name: ";
  cin >> name;
  cout << "Enter number of scores per student: ";
  cin >> nscore;

  for (int j = 0; j < nscore; j++) {

    cout << "Enter score: ";
    cin >> score;

    sum += score; 

    average = sum/nscore;

  }
    cout << "Name: " << name << endl;
    cout << "Sum of scores: " << sum << endl;
    sum = 0;
    cout << "Average of scores: " << average << "\n\n";

  }

}