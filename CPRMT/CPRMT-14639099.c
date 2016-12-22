#include<stdio.h>
int main()
{
	char s1[1004],s2[1005];
	while(scanf("%s %s",s1,s2)==2)
	{
		int i,j;
		//printf("%s %s",s1,s2);
		int a[27]={0};
		int b[27]={0};
		int c[27]={0};
		for( i=0;s1[i]!='\0';i++)
		{
			a[s1[i]-'a']++;
		}
		for(i=0;s2[i]!='\0';i++)
		{
			b[s2[i]-'a']++;
		}
		for(i=0;i<27;i++)
		{
			if(a[i]&& b[i])
			for(j=0;j<(a[i]<b[i]?a[i]:b[i]);j++)
			{
				printf("%c",i+97);
			}
		}
		printf("\n");
	}
	return 0;
}