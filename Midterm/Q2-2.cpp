#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

int main() {

ifstream studentrecord;

studentrecord.open("students.txt", ifstream::in);

if (!studentrecord) {
  cout << "Open error\n";
  exit(0);
}

string line;
double score1, score2;
double stuSum, stuAvg;

  while (getline(studentrecord, line)) {

    stringstream ss (line);
	cout << " line " << line << endl;
    string name;
    getline(ss, name, ' ');
    string score1;
    getline(ss, score1, ' ');
	cout << "Score 1 " << score1 << endl;
    double scr1 = stoi(score1);
    string score2;
    double scr2 = stoi(score2);

    stuSum = scr1 + scr2;
    stuAvg = (scr1 + scr2) / 2;

    cout << "Student name: " << name << " " << "Score 1: " << score1 << " " << "Score 2: " << score2 << " " << "Sum: " << stuSum << " " << "Avg: " << stuAvg << endl;
      
    }

}


