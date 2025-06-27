//given a lowercase alphabet character. You have to print the next character in the alphabet.
#include<iostream>
//#include<iomanip>
using namespace std;
int main()
{ char m;
 cin>>m;
 if(m=='z')
 {
     cout<<"a";
 }
 else
 {cout<<char(m+1);}}
