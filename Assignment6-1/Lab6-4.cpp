#include <iostream>
using namespace std;

int getsum(int n) {
  
  int sum = 0;
  int m, min, max;
  
  for (int i = 0; i < n; i++) {

    cout << "Enter m: \n";
    cin >> m;

    sum += m;

    if(i == 0) {
      min = m;
    }
    else {
      if(min > m) {
       min = m;
      }
    }
    
    if(max < m) {
      max = m;
    }
  }    
   
  sum = sum - min - max;
  
}
  
int main() {
  
  int n, res;
  cout << "Enter your input: \n";
  cin >> n;

  res = getsum(n);
  cout << "The summation result is " << res;
  return 0;

}
