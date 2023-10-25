#include<stdio.h>
void betweenprime(int,int);
int main()
{
    int a,b;
    printf("Enter a two number ");
    scanf("%d",&a,b);
    betweenprime(a,b);
    return 0;
}
void betweenprime(int a,int b)
{
    int n=0,i,flag=0;
    for(n=a; n<=b; n++)
    {
        flag=0;
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
                flag=1;
        }
        if(flag==0)
        printf("%d ",n);
    }
}

