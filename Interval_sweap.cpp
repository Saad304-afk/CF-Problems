/*Given two numbers a and b. You have to answer with "YES" if there is a non-empty interval consisting of numbers from l
to r(l,l+1,l+2,...,r) with a odd numbers and b even numbers, or "NO" otherwise.
Input :
Only one line containing two numbers a and b(0≤a,b≤100)the number of odd numbers and the
number of even numbers in the interval respectively.*/



/*#include<iostream>
using namespace std ;
int main()
{ long long a,b;
cin>>a>>b;

//if(a>2&&b==1 && b>2 && a==1)

//if(a+b==0)
 if(((a>2 && b>=1) || (b>2 && a==1)) && (a+b==0) )
    {cout<<"NO";}

else if(((a<3&& b!=1)||(b<3 && a!=1))&&(a+b>=1) )
    {cout<<"YES";}}*/


#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if(0<=a && b<=100)
    {  if(a==0 && b==0)
    {
        cout<<"NO";
    } //if((a>2 && b<=1)||(a+b==0)|| (a+b)%2!=0|| abs(a-b)>1)
        else if(a-b==1||b-a==1 || a-b==0||b-a==0)

         //if(a<=50 || b<=50)
     { cout<<"YES";}

else
           {cout<<"NO";}
}}


/*#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if(a==0 && b==0)
    {
        cout<<"NO";
    }
     else
     {

      cout<<"YES";}}*/
