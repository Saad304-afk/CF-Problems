/*Given three numbers N,A,B. Print the summation of the numbers between 1 and N whose sum of digits is between A and B inclusive.
Input:Only one line containing three numbers N,A,B (1≤N≤10^4,1≤A≤B≤36).
Output:Print a single line contains the answer according to the required above.
Input :
20 2 5
Output :
84 */
#include<iostream>
using namespace std;
int main()
{ int n,a,b,i;
 cin>>n>>a>>b;
 int total=0;
 for(i=1;i<=n;i++)
 { int sum=0,temp=i;
 while(temp>0)
 { sum=sum+temp%10;
    temp=temp/10;
  }
  if(sum>=a && sum<=b)
  { total=total+i;}}
  cout<<total<<endl;
}
