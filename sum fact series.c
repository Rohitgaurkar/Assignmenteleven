#include<stdio.h>
int main()
{
    int i, sum=0;
    for(i=1; i<=5; i++)
    {
        sum=sum+fact(i)/i;
    }
    printf("sum is %d",sum);
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
