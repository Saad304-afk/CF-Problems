#include<iostream>
#include<cmath>
using namespace std;
/*Print 3 lines that contain the following in the same order:

"floor A / B = Floor result" without quotes.
"ceil A / B = Ceil result" without quotes.
"round A / B = Round result" without quotes.*/
int main ()
{
   double A,B;
   cin>>A>>B;

   cout<<"floor " << A <<" / "<< B << " = " << floor(A/B)<<endl;
   cout<<"ceil " << A <<" / "<< B << " = " << ceil(A/B)<<endl;
   cout<<"round " << A <<" / "<< B << " = " << round (A/B)<<endl;





}
