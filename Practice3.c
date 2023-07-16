#include<stdio.h>
int main()
{
    int n,pork,chicken,beef;
    scanf("%d",&n);
    pork=n/15;
    chicken=n/20;
    beef=n/(0.1/9);
    printf("%d %d %d\n",pork,chicken,beef);
    return 0;
}