#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		printf("%lld\n",192+(n-1)*250);
	}
	return 0;
}