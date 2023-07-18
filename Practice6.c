// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int N;
// 	scanf("%d",&N);
// 	char s[2000001];
// 	int flag;
// 	for(int i=0;i<N;i++)
//     {
// 		flag=0;
// 		scanf("%s",s);
// 		for(int i=0;i<strlen(s)-1;i++)
//         {
// 			if(s[i]>='A'&&s[i]<='Z')
//             {
// 				if(s[i+1]==s[i]+32||s[i+1]==s[i]+1)
//                 {
// 					flag=flag+1;
// 				}
// 				else
//                 {
// 					flag=-1;
// 				}
// 			}
//             if(s[i]>='a'&&s[i]<='z')
//             {
// 				if(s[i+1]==s[i]-32||s[i+1]==s[i]-1)
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
	int N,i,length;
	int a[0];
	char s[0];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",s);
		length=strlen(s);
		for(i=0;i<length-1;i++)
		{
			if(s[i]>'A'&&s[i]<'Z')
			{
				if(s[i]+32==s[i+1]||s[i]==s[i+1]+1)
				{
					continue;
				}
				else
				{
					a[i]='N';
					break;
				}
			}
			if(s[i]>'a'&&s[i]<'z')
			{
				if(s[i]-32==s[i+1]||s[i]==s[i+1]-1)
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
	}
	return 0;
}