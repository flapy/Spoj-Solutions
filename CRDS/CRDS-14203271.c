#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
			long long int sum=(n*(n+1))%1000007;
			n--;
			long long int sum1=((n*(n+1))/2)%1000007;
			long long int ans=(sum+sum1)%1000007;
			printf("%lld\n",ans);
	}
	return 0;
}