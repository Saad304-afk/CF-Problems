#include<stdio.h>
int main()
{ int N;
scanf("%d",&N);
//if(N%3==0 && N%7==0 )
for( int i=1;i<=N;i++)
{   //if(N%3==0 && N%7==0);
    if(i%21==0)/* A number divisible by both 3 and 7 is actually divisible by their least common multiple (LCM).
    3*7=21*/
    printf("%d\n",i);

} return 0;}

