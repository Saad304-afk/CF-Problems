/*Given two numbers X, Y which donate coordinates of a point in 2D plan.
 Determine in which quarter does it belong.*/
#include<iostream>
using namespace std;

int main()
{  double X,Y;
    cin>>X>>Y;
    if(X>0 && Y>0)
    {
        cout<<"Q1";
    }
    else if(X<0 && Y>0)
   { cout<<"Q2";}
   else if(X<0  && Y<0)
   {cout<<"Q3";}
   else if(X>0 && Y<0)
   {
       cout<<"Q4";
   }
   else if(X==0 && Y==0)
   {cout<<"Origem";}
else if(X==0 && (Y>0||Y<0))
{cout<<"Eixo Y";}
 else if(Y==0 && (X>0||X<0))
 {cout<<"Eixo X";}








}
