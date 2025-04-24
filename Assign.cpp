/*Given a letter X. If the letter is lowercase print the letter after converting
it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from
uppercase letter to lowercase letter*/

#include<iostream>
using namespace std;
 int main()
 { char N;
  cin>>N;
  if( N>='a' && N<='z')
  {
      cout<< (char)(N-32);
  }
   else if(N>='A' && N<='Z')
   {
       cout<<(char)(N+32);
   }

 }
