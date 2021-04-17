#include <iostream>
#include <cstdlib>
using namespace std;

void getRandnum(int, int, int);
void findMin(int, int, int);
void printResult(int, int, int, int);

int main() {
  int n1, n2, n3, min;

  srand(time(0));

  getRandnum(n1, n2, n3);
  findMin(n1, n2, n3);
  printResult(n1, n2, n3, min);
}

void getRandnum(int &n1, int &n2, int &n3) {
  int rdnum1 = rand() % 20;
  int rdnum2 = rand() % 20;
  int rdnum3 = rand() % 20;
  int& n1 = rdnum1;
  int& n2 = rdnum2;
  int& n3 = rdnum3;
  return rdnum;
}

void findMin(int n1, int n2, int n3) {
// 	int m;
//   m = n1;
//   if (m > n2)
//     m = n2;
//   if (m > n3)
//     m = n3;
//   return m;

   for (int i = 0; i < 3; i++) {
      if (i == 0) {
          min = n1;
      }

      else {
        if (n1 < min) {
          min = rdnum;

      }
    }
  }    
}

void printResult(int n1, int n2, int n3, int min) {
  cout << "N1: " << n1;
  cout << "N2: " << n2;
  cout << "N3: " << n3;
  cout << "Min: " << min;
}