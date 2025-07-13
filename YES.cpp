/*There is a string s of length 3,consisting of uppercase and lowercase English letters. Check if it is equal to "YES" (without quotes), where each letter can be in any case. For example, "yES", "Yes", "yes" are all allowable.
Input:
The first line of the input contains an integer t(1≤t≤10^3) — the number of testcases.The description of each test consists of one line containing one string s
consisting of three characters. Each character of s is either an uppercase or lowercase English letter.
Output:
For each test case, output "YES" (without quotes) if s satisfies the condition, and "NO" (without quotes) otherwise.
You can output "YES" and "NO" in any case (for example, strings "yES", "yes" and "Yes" will be recognized as a positive response).*/
#include<iostream>
using namespace std;
int main()
{ long long a;
 string w;
 cin>>a;
 for(int i=1;i<=a;i++)
 {cin>>w;
   if(w=="yes"||w=="Yes"||w=="YEs"||w=="YES"||w=="yeS"||w=="yES"||w=="YeS"||w=="yEs")
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}


}
