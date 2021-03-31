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

string line, name, n;
double score1, score2;
double stuSum, stuAvg, classSum, classAvg;
int counter = 0;

  while (getline(stuRec, line)) {

    //int i = std::stoi(line);

    if (counter == 0) {
      stringstream ss (line);
      string n;
      getline(ss, n);
      int tempn = stoi(n);
    }
    
    else {
      stringstream ss (line);
      string name;
      getline(ss, name, ',');
      string score1;
      getline(ss, score1, ',');
      double escore1 = stoi(score1);
      string score2;
      getline(ss, score2, ',');
      double escore2 = stoi(score2);

      stuSum = escore1 + escore2;
      stuAvg = (escore1 + escore2) / 2;

      classSum += stuSum;
      counter++;

      cout << name << " student sum" << stuSum << "\n";
      cout << name << " student average" << stuAvg << "\n";
      
    }

  }

  classAvg = classSum / (counter * 2);

  cout << "Class total: " << classSum << "\n";
  cout << "Class average: " << classAvg << "\n";


}

