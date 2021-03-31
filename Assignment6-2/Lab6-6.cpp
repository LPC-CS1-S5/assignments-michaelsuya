#include <iostream>
using namespace std;

void getListprime(int begin = 0, int end = 100);
int inputValid(int number1, int number2);

int main() {

    int begin, end, res;
    
    cout << "Enter beginning value: \n";
    cin >> begin;
    cout << "Enter end value: \n";
    cin >> end;

    res = inputValid(begin, end);
    if(!res)
      exit(0);
    
    getListprime(begin, end);

}

int inputValid(int number1, int number2){
    if (number1 > 0 && number2 > 0)
        return 1;
      if (number1 == number2)
        getListprime(number1);
      if (number1 > number2)
        getListprime();
      if (number1 < number2)
        getListprime(number1, number2);
    else 
        return 0;
}

void getListprime(int begin, int end) {

  int i, j, k;

  for (i = begin; i < end; i++) {

    for (j = 2; j <= i / 2; ++j) {

      if (i % j == 0) 
        k = 0;
        break;
    }
    if (k == 1)
      cout << i << "\t";
    k = 1;
  }
}


