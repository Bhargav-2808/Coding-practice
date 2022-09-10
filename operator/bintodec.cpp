#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  int n,sum=0;
  cout<<"Enter the binary number ";
  cin>>n;

  int i=0;
  while(n!=0)
    {
      int digit=n%10;

      if(digit==1)
      {
        sum=sum+digit*pow(2,i);
      }
      i++;
      n/=10;
    }
  cout<<"The answer is "<<sum;
  return 0;

}
