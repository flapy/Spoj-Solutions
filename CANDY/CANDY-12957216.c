//Chirag Agarwal
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
	while(1)
	{
		long long int n,a[10003],sum=0,i,ans;
		scanf("%lld",&n);
		if(n==-1)
		break;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum+=a[i];
		}
		long long int moves=0;
		if(sum%n!=0)
		printf("-1\n");
		else
		{
			ans=sum/n;
			for(i=0;i<n;i++)
			{
				if(a[i]<ans)
				{
					moves+=ans-a[i];
				}
			}
			printf("%lld\n",moves);
		}
	}
	return 0;
}