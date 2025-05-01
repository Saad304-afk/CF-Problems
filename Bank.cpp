/*Rabid wants to save money each month.
Task: Ask how many months he’ll deposit money and the amount each month. Use a loop to
calculate the total savings.*/

#include<iostream>
using namespace std;
int main()
{ int month,am,tot=0;
    cin>>month>>am;

    for(int i=1;i<=month;i++)
    {
        tot=tot+am;
        cout<<"Month  " << i <<"  savings is : "<<tot<<endl;
    }
}

