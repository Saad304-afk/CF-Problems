/*Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.
The comparison is as follows: A < B, A > B, A = B.
Where A,B are two integer numbers and S refers to the sign between them.*/
#include<iostream>
using namespace std;
int main()
{ long m, n ;
 char s ;
 cin>>m>>s>>n;
 if( s== '>')
 {  if(m>n)
     {cout<<"Right";}
     else
        cout<<"Wrong";}

 else if( s== '<' )
 {  if( m<n)
     {cout<<"Right";}
 else
     {cout<<"Wrong";}
 }
  else if( s== '=')
  { if(m==n)
      {cout<<"Right";}

  else
  {
      cout<<"Wrong";
  }}



 }
  //else

     // cout<<"Wrong";






