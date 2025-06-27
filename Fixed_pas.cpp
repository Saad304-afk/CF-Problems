#include<iostream>
using namespace std;

int main()
{ int pas=1999;
 //cin>>pas;
 int i=1;
 while(cin>>i)
 {
     //cin>>i;
     if(i==pas)
     {
         cout<<"Correct"<<endl;
      break;}
    else{cout<<"Wrong"<<endl;}
 }
}
