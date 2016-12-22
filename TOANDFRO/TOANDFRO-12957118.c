//Chirag Axgarwal
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
	long long int n,i,j;
	while(1)
	{
		int a;
		char s[100005];
		char str[103][103];
		scanf("%lld",&n);
		if(n==0)
		break;
		scanf("%s",s);
		long long int len=strlen(s);
		long long int m=len/n;
		//printf("%lld %lld",m,len);
		long long int k=0;
		for(i=0;i<m;i++)
		{
			if(i%2==0)
			{
				a=1;
				j=0;
			}
			else
			{
				a=0;
				j=n-1;
			}
			for(;(a>0?j<n:j>=0);(a>0?j++:j--))
			{
				str[i][j]=s[k];
				k++;
			}
		}
		/*printf("Your matrix is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			printf("%c ",str[i][j]);
			printf("\n");
		}*/
		//printf("Your answer is\n");
		for(j=0;j<n;j++)
		{
			for(i=0;i<m;i++)
			{
				printf("%c",str[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}