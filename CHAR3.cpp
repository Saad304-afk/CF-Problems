#include<iostream>
using namespace std;

int main()
{


char ltr;
cin>>ltr;

((ltr>='a'&& ltr<='z')||(ltr>= 'A'&& ltr<='Z'))?(ltr=ltr-32):(ltr=ltr-32);

/*if(ltr>='a'&& ltr<='z')
{
    cout<<ltr*/

//||(ltr>= 'A'&& ltr<='Z')


cout<<ltr;


}








