/*Given 3 lines of input described as follow:
First line contains a symbol S.Second line contains a number N.Third line contains Nnumbers.
For each number Xi in the N numbers print a new line that contains the symbol S repeated Xi time.
Input:The first line contains a symbol S can be (+,−,*,/)The second line an number N(1≤N≤50).The third line contains N
numbers (1≤Xi≤100).*/
#include<iostream>
using namespace std;
int main()
{ long long n,k;
  char s;
  cin>>s>>n;
  for(int i=1;i<=n;i++)
  { cin>>k;
  for(int j=1;j<=k;j++)
  {cout<<s;}
  cout<<endl;}
  }

