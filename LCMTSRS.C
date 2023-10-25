#include<stdio.h>
int lcm(int, int);
int main()
{
    int a,b;
    printf("Enter a two number");
    scanf("%d %d",&a,&b);
    lcm(a,b);
    printf("LCM is %d",lcm(a,b));
    return 0;
}
int lcm(int a, int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            break;
        }

    }
    return i;
}
