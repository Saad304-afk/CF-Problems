/*Given a mathematical expression. The expression will be one of the following expressions: A+B
A−B,A*B, and A/B Print the result of the mathematical expression.*/
#include<iostream>
using namespace std;
 int main()
 { long long A,B,AS,BS,AM,AD;
   char S ;
   cin>>A>>S>>B;

   AS=A+B;
   BS=A-B;
   AM=A*B;
   AD=A/B;
   if(S== '+')
{  cout<<AS;}
    else if(S== '*')
     {cout<<AM;}
     else if(S== '-')
     {cout<<BS;}
     else if(S=='/')
     { if(B!=0)
         cout<<AD;}











 }
