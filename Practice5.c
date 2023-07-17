#include<stdio.h>
int main()
{
    int N,i,nob=0,nog=0;
    float sum,sum1,sum2;
    struct student
    {
        int gender;
        float score;
    };
    scanf("%d",&N);
    struct student stu[N];
    for(i=0;i<N;i++)
    {
        scanf("%d %f",&stu[i].gender,&stu[i].score);
        sum=sum+stu[i].score;
        if(stu[i].gender==1)
        {
            sum1=sum1+stu[i].score;
            nob=nob+1;
        }
        if(stu[i].gender==0)
        {
            sum2=sum2+stu[i].score;
            nog=nog+1;
        }
    }
    printf("%.1f ",sum/N);
    if(nob==0)
    {
        printf("x ");
    }
    else
    {
        printf("%.1f ",sum1/nob);
    }
    if(nog==0)
    {
        printf("x ");
    }
    else
    {
        printf("%.1f ",sum2/nog);
    }
    return 0;
}