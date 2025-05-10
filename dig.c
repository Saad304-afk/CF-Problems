#include<stdio.h>
int main()
{ int n,rem;
scanf("%d",&n);

 for(int p=1;p<=n;p++)
 { int l;
     scanf("%d",&l);
   if(l==0)
   {
       printf("0");
   }

   else{   while(l!= 0)
    {
     rem=l%10;
     printf("%d ",rem);
     l=l/10;
    }}
     printf("\n");
 }
 return 0;
}

