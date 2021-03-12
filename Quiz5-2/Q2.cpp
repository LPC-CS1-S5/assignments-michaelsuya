#include <iostream>
using namespace std;

int main() {

  int n, m;
  int result;

  cout << "Enter base n: ";
  cin >> n;

    if (n <= 0 || n >= 10) {
      cout << "Error" << endl;
      return(0);
    }

  cout << "Enter base m: ";
  cin >> m;

    if (m < 1 || m > 10) {
      cout << "Error" << endl;
      return(0);
    }

  int retVal = 1;
  for (int i = 0; i <= m; i++) {

      cout << retVal << endl;
      retVal *= n;

  }

}