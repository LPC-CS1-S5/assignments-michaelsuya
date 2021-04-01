#include <iostream>
using namespace std;

int main() {
const  int N=5, M=5;
    int     i, j;
    for(i=0;i<N;i++) {
        for(j=i; j<M-i; j++)
            cout << " (" << i << "," << j << ") " ;
        cout << endl;
    }
}

// When j = 3, terminates since the condition does not pass
// When j = 4, terminates since the condition does not pass