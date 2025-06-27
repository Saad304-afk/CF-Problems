/*Given 4 numbers A,B,C
 and D.If A^B> C^D print "YES" otherwise, print "NO".
Input :
Only one line containing 4 numbers A,B,C and D
(1≤A,C≤10^7), (1≤B,D≤10^12)
Output :
Print "YES" or "NO" according to the problem above. */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{ long long a,b,c,d,p1,p2;
cin>>a>>b>>c>>d;
 if(1<=a && c<=10^7 && 1<=b && d<=10^12)
 {  double p1= b* log(a) ; //a^b;
    double p2=d * log(c) ; //c^d;
    if(p1<p2 || p1==p2)
    {
       cout<<"NO";
    }
    else
     {   cout<<"YES";

     }
 }
}



