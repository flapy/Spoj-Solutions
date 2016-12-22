#include<stdio.h>
//hepl from net
int main()
{
	long long int n,sum=0;
	scanf("%lld",&n);
	long long int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(i*j<=n)
			sum++;
			else
			break;
		}
	}
	printf("%lld\n",sum);
	return 0;
}