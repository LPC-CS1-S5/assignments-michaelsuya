#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n1 = 28;
    int n2 = 32;
    int n3 = 37;
    int n4 = 24;
    int n5 = 33;
    int sum;
    float average;

    sum = n1 + n2 + n3 + n4 + n5;
    average = sum/5.0000f;

    cout << setprecision(3) << average;

}