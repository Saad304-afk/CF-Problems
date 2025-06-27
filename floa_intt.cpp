#include<iostream>
using namespace std;
int main()

{ double num,f;
 cin>>num;
 if(1<=num<=10^3)
  {

  if( num==(int)num )
    {
        cout<<"int"<<" "<<num;
    }
    else
    {
        cout<<"float"<<" "<<(int)num;

    f=num-((int)num);
    cout<<" "<<f;
    }}




}
