#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

int rdnum;
int min = rdnum;

srand(time(0));

cout << "The Generated Random Numbers: " << endl;

for (int i = 0; i < 5; i++) {

    rdnum = rand( ) % 100;

    cout << rdnum << " ";

      if (i == 0) {
  
          min = rdnum;

      }

      else {
        if (rdnum < min) {

          min = rdnum;

      }
    }
  }

cout << "\nThe Minimum Value: " << min;
  
}