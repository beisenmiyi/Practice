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