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
string line, name;
double score1, score2;
double stuSum, stuAvg, classSum, classAvg;
int counter = 0;

  while (getline(stuRec, line)) {

    //int i = std::stoi(line);

    if (counter == 0) {
      stringstream ss (line);
      string tempn;
      getline(ss, tempn);
      n = stoi(tempn);
    }
    
    else {
      stringstream ss (line);
      string tempstr;
      string tempname;
      getline(ss, tempstr, ',');
      tempname = tempstr;
      getline(ss, tempstr, ',');
      score1 = stoi(tempstr);
      getline(ss, tempstr, ',');
      score2 = stoi(tempstr);

      stuSum = score1 + score2;
      stuAvg = (score1 + score2) / 2;

      classSum += stuSum;

      cout << tempname << " student sum" << stuSum << "\n";
      cout << tempname << " student average" << stuAvg << "\n";
      
    }
    
    counter++;
    
  }

  classAvg = classSum / (n * 2);

  cout << "Class total: " << classSum << "\n";
  cout << "Class average: " << classAvg << "\n";


}

