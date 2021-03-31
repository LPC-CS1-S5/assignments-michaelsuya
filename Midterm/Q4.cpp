#include <iostream>
#include <cstdlib>
using namespace std;

int getRdnum();
int getRdnum(int n2);
int getRdnum(int n1, int n2);

int main() {

  int n1, n2;
  srand(time(0));
  
  cout << "Enter n1: \n";
  cin >> n1;
  cout << "Enter n2: \n";
  cin >> n2;

  cout << "1-100: " << getRdnum() << endl;
  cout << "1-n2: " << getRdnum(n2) << endl;
  cout << "n1-n2: " << getRdnum(n1, n2) << endl;

}

int getRdnum() {
  return rand() % 100 + 1;
}

int getRdnum(int n2) {
  int rdnum;
  rdnum = rand() % n2 + 1;
  return rdnum;
}
int getRdnum(int n1, int n2) {
  int rdnum;
  rdnum = rand() % (n2 - n1 + 1) + n1;
  return rdnum;
}