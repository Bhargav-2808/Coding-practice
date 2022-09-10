#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  long long int n;
  unsigned long long int i=0,sum=0;
  cout<<"Enter the binary number ";
  cin>>n;
  if(n<0)
  {
    n=pow(2,18)*n;
  }
  cout<<n<<endl;

  while(n!=0)
    {
        int digit =n&1;
        sum+=digit*pow(10,i);
        n=n>>1;
        i++;

        cout<<"The answer is "<<sum<<endl;
    }
  cout<<"The answer is "<<sum <<endl;
  return 0;
}
