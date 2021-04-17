#include <iostream>
using namespace std;

void swapTwoValues(int, int);
void swapTwoValues(float, float);

int main() {

int n1, n2;
float f1, f2;

cout << "User inputs: ";
cin >> n1 >> n2;
cout << "User float inputs: ";
cin >> f1 >> f2;

swapTwoValues(n1, n2);
swapTwoValues(f1, f2);

}

void swapTwoValues(int n1, int n2) {
  cout << "Your two integers are " << n1 << " and " << n2 << endl;
  //  int temp;
    // temp = n1;
    // n1 = n2;
    // n2 = temp;
}
void swapTwoValues(float f1, float f2) {
  cout << "Your two float values are " << f1 << " and " << f2 << endl;
//    float temp;
//     temp = n1;
//     n1 = n2;
//     n2 = temp;
}