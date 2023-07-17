#include<stdio.h>
int main()
{
    int N,M,S;
    scanf("%d %d %d",&N,&M,&S);
    if(N/2<N-M*S)
    {
        printf("hai sheng %d mi!jia you ya!\n",N-M*S);
    }
    else
    {
        printf("hai sheng %d mi!chong ya!\n",N-M*S);
    }
    return 0;
}