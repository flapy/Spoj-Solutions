#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int c,k,w;
		scanf("%lld %lld %lld",&c,&k,&w);
		long long int p=k/w;
		if(p>=c)
		printf("yes\n");
		else
		printf("no\n");
	}
	return 0;
}