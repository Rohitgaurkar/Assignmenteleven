#include<stdio.h>
int square(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    printf("square is %d",square(x));
    return 0;
}
int square(int x)
{
    return (x*x);
}
