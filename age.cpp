/*Given a Number N corresponding to a person's age (in days).
Print his age in years, months and days, followed by its respective message "years", "months", "days".*/
#include<iostream>
using namespace std;
int main()
{ int y,m,d,dy;
cin>>d;

y=d/365;// y=
m=((d%365)/30);      //1 years
//1 months
//5 days
dy=((d%365)%30);
cout<<y<<" years"<<endl<<m<< " months"<<endl<<dy<< " days";












}
