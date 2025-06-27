//Given three numbers A,B,C. Print these numbers in ascending order followed
//by a blank line and then the values in the sequence as they were read.
#include<iostream>
using namespace std;
int main()
{ int a,b,c,maxi,mini,midl;
   cin>>a>>b>>c;
   if(a>b && a>c)
   {maxi=a;}
   //else mini=a;}
   else if( b>c)
   {
      maxi=b;
   } else {(maxi=c );}

   if(a<b && a<c)
   {
       mini=a;}

   else if(c>b)
   {mini=b;}
   else
    {(mini=c );}
    midl=a+b+c-(maxi+mini);

   cout<<mini<<endl<< midl<<endl<<maxi<<endl;
   cout<<endl<<a<<endl<<b<<endl<<c;












}
