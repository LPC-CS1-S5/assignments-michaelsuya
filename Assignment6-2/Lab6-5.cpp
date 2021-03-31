#include <iostream>
using namespace std;

static int sume;
static int sumo;
int evensumGet(int a);
int oddsumGet(int a);

int main() {

    int evenSum = 0, oddSum = 0;
    int input;

    do {
        cout << "Enter your input: \n";
        cin >> input;

        if (input == -1)
          break;
        else if (input % 2)
          oddSum = oddsumGet(input);
        else 
          evenSum = evensumGet(input);
    } while(1);
    cout << oddSum << " : The summation of all Odd inputs\n";
    cout << evenSum << " : The summation of all Even inputs\n";

}

int evensumGet(int a) {
    sume += a;
    return sume;
}
int oddsumGet(int a){
    sumo += a;
    return sumo;
}