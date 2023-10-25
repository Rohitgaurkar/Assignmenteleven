#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int r,i,flag=0;
    for(r=1;r<=n;r++)
    {
        flag=0;
        for(i=2;i<=r/2;i++)
        {
            if(r%i==0)
                flag=1;
        }
        if(flag==0)
            printf("%d ",r);

    }

}
