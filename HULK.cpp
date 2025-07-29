#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            cout<<"I hate ";
        }
        else
        {
            cout<<"I Love ";
        }
        if(i==n)
        {cout<<"it";}
        else
        {cout<<"that"<<" ";}



    }
}
