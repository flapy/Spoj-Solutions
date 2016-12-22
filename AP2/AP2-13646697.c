#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,l,sum,n,d,i;
		scanf("%lld %lld %lld",&a,&l,&sum);
		n=(sum*2)/(a+l);
		d=(l-a)/(n-5);
		a=a-2*d;
		//printf("%lld\n",d);
		printf("%lld\n",n);
		for(i=1;i<=n;i++)
		{
			if(i==n)
			printf("%lld\n",a+(i-1)*d);
			else
			printf("%lld ",a+(i-1)*d);
		}
	}
	return 0;
}

