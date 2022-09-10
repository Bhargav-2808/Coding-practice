#include <iostream>
#include<math.h>


using namespace std;

int main() {
  int n,sum=0;
  cout << "Enter decimal number" << endl;
  cin >> n;


  int i=0;
  while (n != 0) {
    int bit = n&1;
    sum= (bit*pow(10,i)) +sum;
    n=n>>1;
    i++;
  }
  cout<<"The answer is "<<sum;
  return 0;
}

