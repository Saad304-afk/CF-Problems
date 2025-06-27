#include<iostream>
using namespace std ;
int main ()
{ long long  n,k,a,res;
cin>>n>>k>>a;

res= ((n*k)/a);

if( (n*k)%a !=0)
{
    cout<<"double";
}
else if(1<=res && res<=2147483647)
   {
       cout<<"int";
   }
 //else if(-9223372036854775808 <=res && res<= 9223372036854775807  )
  //  { cout<<"long long";}
 else
    {cout<<"long long";}}
