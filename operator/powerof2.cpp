//is the number power of two

#include <iostream>
using namespace std;
int main() {
  int n, c = 0;
  cout << "Enter the number" << endl;
  cin >> n;

  int num = n;
  while (num > 1) {
    num = num >> 1;
    if (num & 1) {
      c++;
    }
  }

  if (c == 1) {
    cout << " The number is power of two";
  } else {
    cout << " The number is not power of two";
  }

  return 0;
}
