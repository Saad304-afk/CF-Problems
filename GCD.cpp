#include<iostream>
using namespace std;
int main()
{ long n,row,col;
cin>>n;
for(int i=1;i<=n;i++)
    {
        for(col=1;col<=i;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
