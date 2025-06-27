#include<iostream>
using namespace std ;
int main ()
{
    long long a,m,b, res=0;
    cin>>a>>m>>b;
    long long pm= min(a,min (m,b));
     //long long pm = min(a, min(m, b));
    res=res+pm;
    a=a-pm;
    m=m-pm;
    b=b-pm;
    pm=min(a/2,b);
    res=res+pm;
    cout<<res<<endl;
}
