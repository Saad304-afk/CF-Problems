#include<iostream>
using namespace std;
int main()
{ long long a,b,c,d,mul=0,r,m,n;
 cin>>a>>b>>c>>d;

 if(2<=a&& 2<=b && 2<=c && d<=10^9)
  {m=(a*b)%100;
   n=(c*d)%100;
mul=m*n;
  r=mul%100;
   if(r<10)
    {cout<<"0"<<r<<endl;}
   else

 {  cout<<r<<endl;}




}}
