#include<stdio.h>
int main()
{
	int t,i,j;
	char s[404],stack[404];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		i=0;
		j=0;
		while(s[i]!='\0')
		{
			if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='(' ||s[i]=='^'||s[i]=='%')
			{
				stack[j]=s[i];
				j++;
			}
			else if(s[i]==')')
			{
				j--;
				while(stack[j]!='(')
				{
					printf("%c",stack[j]);
					j--;
				}
			}
			else
			printf("%c",s[i]);
			i++;
		}
		printf("\n");
	}
	return 0;
} 