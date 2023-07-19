// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int N;
// 	scanf("%d",&N);
// 	char s[2000001];
// 	int flag;
// 	for(int j=0;j<N;j++)
//     {
// 		flag=0;
// 		scanf("%s",s);
// 		for(int j=0;j<strlen(s)-1;j++)
//         {
// 			if(s[j]>='A'&&s[j]<='Z')
//             {
// 				if(s[j+1]==s[j]+32||s[j+1]==s[j]+1)
//                 {
// 					flag=flag+1;
// 				}
// 				else
//                 {
// 					flag=-1;
// 				}
// 			}
//             if(s[j]>='a'&&s[j]<='z')
//             {
// 				if(s[j+1]==s[j]-32||s[j+1]==s[j]-1)
//                 {
// 					flag+=1;
// 				}
// 				else
//                 {
// 					flag = -1;
// 				}
// 			}
// 		}
// 		if(flag==strlen(s)-1)
//         {
// 			printf("Y\n",flag);
// 		}
// 		else
//         {
// 			printf("N\n",flag);
// 		}
// 	}
// 	return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
	int N,i,j,length=0;
	int a[100];
	char s[20];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",s);
		length=strlen(s);
		for(j=0;j<length-1;j++)
		{
			if(s[j]>'A'&&s[j]<'Z')
			{
				if(s[j]+32==s[j+1]||s[j]==s[j+1]+1)
				{
					continue;
				}
				else
				{
					a[i]='N';
					break;
				}
			}
			if(s[j]>'a'&&s[j]<'z')
			{
				if(s[j]-32==s[j+1]||s[j]==s[j+1]-1)
				{
					continue;
				}
				else
				{
					a[i]='N';
					break;
				}
			}
		}
		if(j==length-1)
		{
			a[i]='y';
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%c\n",a[i]);
	}
	return 0;
}