/*Given a number N. Print all the divisors of N in ascending order.
Input:
Only one line containing a number N (1≤N≤10^4).
Output:
Print all positive divisors of N, one number per line.*/
#include<iostream>
using namespace std;
int main()
{ long n;
cin>>n;
for(int i=1;i<=n;i++)
{ if(n%i==0)
   cout<<i<<endl;

}

}
