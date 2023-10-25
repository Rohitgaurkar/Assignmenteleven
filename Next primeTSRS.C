#include<stdio.h>
int nextprime(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("next prime is %d",nextprime(n));
    return 0;
}
int nextprime(int r)
{
    int n,i,flag=0;
    for(n=r; 1; n++)
    {
        flag=0;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
        {
            return n;
            break;
        }
    }
}
