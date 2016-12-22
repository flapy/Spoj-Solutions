#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int t;
	scanf("%lld",&t);
	while(t--)
	{
		char s[10005],s1[100005],s2[100005],s3[100005],s4[100005];
		scanf("%s",s);
		//printf("%s",s);
		scanf("%s",s1);
		//printf("%s",s1);
		scanf("%s",s2);
		//printf("%s",s2);
		scanf("%s",s3);
		//printf("%c",s3);
		scanf("%s",s4);
		//printf("%s",s4);	
		int l=strlen(s),i,flag=0,flag2=0,flag4=0,l2=strlen(s2),l4=strlen(s4),a,b,c;
		for(i=0;i<l;i++)
		{
			if(s[i]=='m')
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			b=atoi(s2);c=atoi(s4);
			a=c-b;
			printf("%d + %d = %d\n",a,b,c);
			continue;
		}
		for(i=0;i<l2;i++)
		{		
			if(s2[i]=='m')
			{
				flag2=1;
				break;
			}
		}
		if(flag2)
		{
			a=atoi(s);c=atoi(s4);
			b=c-a;
			printf("%d + %d = %d\n",a,b,c);
			continue;
		}
		for(i=0;i<l4;i++)
		{		
			if(s4[i]=='m')
			{
				flag4=1;
				break;
			}
		}
		if(flag4)
		{
			a=atoi(s);b=atoi(s2);
			c=a+b;
			printf("%d + %d = %d\n",a,b,c);
			continue;	
		}
	}
	return 0;
}