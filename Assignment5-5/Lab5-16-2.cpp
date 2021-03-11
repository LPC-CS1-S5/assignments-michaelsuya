#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

int main() {

ifstream stuRec;

stuRec.open("stuRecord.txt", ifstream::in);

if (!stuRec) {
  cout << "Open error\n";
  exit(0);
}

int n;
string name;
double score1, score2;
double average, stuSum, totalSum;

string line;
int counter = 0;

  while (getline(stuRec, line, ',')) {

    if (counter == 0) {
      cout << "Number of students: \n";
      n = std::stoi(line);
    }
    
    else {
      stringstream ss (line);
      string tempstr;
      getline(ss, name, ',');
      getline(ss, tempstr, ',');
      score1 = stoi(tempstr);
      getline(ss, tempstr, ',');
      score2 = stoi(tempstr);
    }
    
    counter++;
    
  }

}

