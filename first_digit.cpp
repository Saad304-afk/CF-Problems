//Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

#include<iostream>
using namespace std;
int main()
{
 long N,coun=0;
 cin>>N;
 int i;
while(N=N/1000)
{ //N=N/1000;

  if(N%2==0)  //
{cout<<"EVEN"<<endl;}
    else {cout<<"ODD"<<endl; } }}





/*/for(int i=0;i<=N;i++)      // 4569  4|10|1
{  //f(N%10!=0){          //         4
    N=N/10;       //                    -----
    //coun++;  //
    if(N%2==0)  //

   {cout<<"EVEN"<<endl;}
    else {cout<<"ODD"<<endl;}}
}}*/


