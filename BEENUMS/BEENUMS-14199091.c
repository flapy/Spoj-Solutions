#include<stdio.h>
#include<math.h>
int main()
{
	long long int n;
	scanf("%lld",&n);//ans=1+6+12+18 =>(ans-1)/6=1+2+3+4-----(i.e n*(n+1)/2)
	while(n!=-1)
	{
		n--;
		n=n*2;
		if(n%6!=0)
		{
			printf("N\n");
			scanf("%lld",&n);
			continue;
		}
		else
		{
			long long int ans=n/6;
			double d=sqrt(1+4*1*ans);
			if(fmod(d,1)!=0)
			{
				printf("N\n");
				scanf("%lld",&n);
				continue;
			}
			else
			{
				double root1=(-1+d)/2;
				if(fmod(root1,1)!=0)
				{
					printf("N\n");
					scanf("%lld",&n);
					continue;
				}
				else
				printf("Y\n");
			}
		}
		scanf("%lld",&n);
	}
	return 0;
}