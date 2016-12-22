#include<stdio.h>
int main()
{
	long long int t,x,y,ans;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&y);
		if(x==y)
		{
			if(x%2==0)
			ans=2*x;
			else
			ans=2*x-1;
			printf("%lld\n",ans);
		}
		else if((x-y)==2)
		{
			if(x%2==0)
			{
				ans=x+y;
			}
			else
			{
				ans=x+y-1;
			}
			printf("%lld\n",ans);
		}
		else
		printf("No Number\n");
	}
	return 0;
}
