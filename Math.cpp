/*Given a mathematical expression. The expression will be one of the following expressions:
A+B=C, A-B=C and A*B=C
where A,B,C are three numbers, S is the sign between A and B, and Q the '=' sign
Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.
Input
Only one line containing the expression: A,S,B,Q,C respectively (0≤A,B≤100,-10^5≤C≤10^5) and S can be ('+', '-', '*') without the quotation.
Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.*/
#include<iostream>
using namespace std;
int main()
{ int a,b,f,sum=0,subs=0,muls=0;
 char s,c;
 cin>>a>>s>>b>>c>>f;
  sum=a+b;
  subs=a-b;
  muls=a*b;

  if(s== '+')
  {(sum==f)? (cout<<"Yes" ): (cout<<sum)  ;}
 else if(s== '-')
  {(subs==f)? (cout<<"Yes" ): (cout<<subs)  ;}
  else
   {(muls==f)? (cout<<"Yes" ): (cout<<muls)  ;}}
