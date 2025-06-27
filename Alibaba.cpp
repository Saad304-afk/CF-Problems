/*One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×) between the other three numbers; so that each operator is used only once.
a□b□c=d; */

#include<iostream>
using namespace std ;
int main()
{ long long a,b,c,d;
//char '+','-','*';
cin>>a>>b>>c>>d;
if(-10^9<=a<=10^9 && -10^9<=b<=10^9 && -10^9<=c<=10^9 && -10^18<=d<=10^18 )
   {
       if(a+b-c==d)
       {cout<<"YES";}
       else if(a+b*c==d)
       {cout<<"YES";}
       else if (a-b*c==d)
        {cout<<"YES";}
       else if (a-b+c==d)
        {cout<<"YES";}
        else if (a*b-c==d)
        {cout<<"YES";}
        else if (a*b+c==d)
        {cout<<"YES";}

       else
        { cout<<"NO";}

}}
