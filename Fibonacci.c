#include<stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int prev=0, curt=1, next=0;
    int i;
    printf("1 ");
    for(i=1; i<=n-1; i++)
    {
        next=prev+curt;
        printf("%d ",next);
        prev=curt;
        curt=next;
    }
}
