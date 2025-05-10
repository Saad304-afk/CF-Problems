#include<iostream>
using namespace std;

int main()

{ int n,ev=0,odd=0,pos=0,neg=0;

cin>>n;
for(int i=1;i<=n;i++)
{  int v;
 cin>>v;
 if(v%2==0)
 {
     ev++;
 //cout<<"Even: "<<ev<<endl;
 }
 if(v%2!=0)
 {
     odd++;
 //cout<<"Odd: "<<odd<<endl;
 }
 if(v>0)
 {
     pos++;
    // cout<<"Positive: "<<pos<<endl;
 }
  if(v<0)
  {
      neg++;
     // cout<<"Negative: "<<neg<<endl;

  }
}
cout<<"Even: "<<ev<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<pos<<endl;
cout<<"Negative: "<<neg<<endl;
 }

