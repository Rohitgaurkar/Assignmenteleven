#include<stdio.h>
void pascal(int);
int comb(int, int);
int fact(int);
int main()
{
    pascal(5);
    return 0;
}
void pascal(int n)
{
    int i,j;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=i; j++)
        {
          comb(i,j);
          printf("%d ",comb(i,j));
        }
        printf("\n");
    }
}
int comb(int n, int r)
{
    return fact(n)/(fact(n)*fact(n-r));

}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n; i++)
         fact=fact*i;
    return fact;

}
