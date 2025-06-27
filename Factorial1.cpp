/*#include<iostream>
using namespace std ;
int main ()
{ int t,n;
cin>>n;
for(int p=0;p<n;p++)
{cin>>t;
int res=1;
for(int i=1;i<=t;i++)
{  //int res=1;
//for(int c=1;c<=n)
  res=res*i;}
  cout<<res<<endl;

}}*/
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) 
    {
      factorial *= i;
    }
    cout << factorial << endl;
  }
  return 0;
}