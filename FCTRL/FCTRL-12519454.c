#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,t,sum,k,i;
	scanf("%lld",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld",&n);
		for(i=1;;i++)
		{
			k=pow(5,i);
			if((n/k)==0)
			break;
			sum+=n/k;
		}
		printf("%lld\n",sum);
	}
	return 0;
} 