// 1.金 2.木 3.水 4.火 5.土

// 2生4  4生5  5生1  1生3  3生2

// 1克2  2克5  5克3  3克4  4克1
#include<stdio.h>
int main()
{
    char s[10][7];
    int N,i,x,y;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&x,&y);
        if(x==1&&y==2||x==2&&y==1)
        s[i]="1 ke 2";
    }
    return 0;
}