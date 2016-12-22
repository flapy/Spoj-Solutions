#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	//printf("\n");
	while(t--)
	{
		long long int a,n,i,sum=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a);
			sum=(sum+a)%n;
		}
		if(sum%n==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
