/*You are given an array of distinct integers x1,x2,…,xn
 and an integer s
.Initially, you are at position pos=s on the X
 axis. In one step, you can perform exactly one of the following two actions:
Move from position pos
 to position pos+1.
Move from position pos
 to position pos−1.
A sequence of steps will be considered successful if, during the entire journey, you visit each position xi
 on the X
axis at least once. Note that the initial position pos=s
 is also considered visited.
Your task is to determine the minimum number of steps in any successful sequence of steps.
Input :
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases. The description of the test cases follows.
The first line of each test case contains two integers n
 and s(1≤n≤10, 1≤s≤100) — the number of positions to visit and the starting position.
The second line of each test case contains n
 integers x1,x2,…,xn
 (1≤xi≤100
). It is guaranteed that for all 1≤i<n
, it holds that xi<xi+1
Output
For each test case, output the minimum number of steps in any successful sequence of steps.
*/
#include<iostream>
#include<cmath>
using namespace std ;
int main()
{ int t ,s,n;
 cin>>t;
 while(t--)
 {

 cin>>n>>s;
 int x[n];
 int i;
 for(i=0;i<n;i++)
 {
     cin>>x[i];
 }
 int min_x=x[0];
 int max_x=x[n-1];
 int w1= abs(s-min_x)+(max_x-min_x);
 int w2= abs(s-max_x)+(max_x-min_x);
 int ans= min(w1,w2);
 cout<<ans<<endl;

}}
