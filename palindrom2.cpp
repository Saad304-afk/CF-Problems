#include<iostream>
using namespace std;
int main()
{
    long n,temp,sum=0,rem;
    cin>>n;
    temp=n;
    while(temp!=0)
    { //n==temp;
      rem= temp%10;
      sum=sum*10+rem;
      temp=temp/10;}
      if(n==sum)
      {
          cout<<n<<endl<<"YES";}
          else
            { /*while(temp!=1)
    { //n==temp;
      rem= temp%10;
      sum=sum*10;
          temp/=10;*/
      cout<<sum<<endl<<"NO";

}}
