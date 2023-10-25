#include<stdio.h>
int prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    prime(x);
    return 0;
}
int prime(int n)
{
   int i, flag=0;
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
       {
           flag=1;
       }
   }
   if(flag==1)
   {
       printf("not a prime number");
   }
   else
   {
       printf("Prime a number");

   }
   return 0;
}
