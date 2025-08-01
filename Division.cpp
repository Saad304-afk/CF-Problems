#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i;
    cin>>n;
    vector<long>a(n);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(1900<=a[i])
        {
            cout<<"Division 1"<<endl;
        }
        else if(1600<=a[i] && a[i]<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(1400<=a[i] && a[i]<=1500)
        {
            cout<<"Division 3"<<endl;
        }
        else if(a[i]<=1399)
        {
            cout<<"Division 4"<<endl;
        }

    }

}
