#include<stdio.h>
int hcf(int, int);
int main()
{
    int a,b;
    printf("Enter a two number\n");
    scanf("%d %d",&a,&b);
    hcf(a,b);
    printf("hcf is: %d",hcf(a,b));
    return 0;
}
int hcf(int a, int b)
{
    int i, min,hcf;
    min=a<b?a:b;

    for(i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)

             hcf=i;



    }
    return hcf;
}

