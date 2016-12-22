#include<stdio.h>
#include<math.h>
int main()
{
	long long int a[100005],n;
	scanf("%lld",&n);
	while(n--)
	{
		//printf("nis %lld\n",n);
		long long int k;
		scanf("%lld",&k);
		if(k%2==0)
		{
			long long int j=0,pos=0,ans,i,sum=0;
			while(1)
			{
				//printf("n is %lld\n",n);
				ans=k & 1<<j;
				if(ans)
				a[pos]=1;
				else
				a[pos]=0;
				if(k & 1<<j)
				{
					sum+=pow(2,pos);
				}
			//	printf("sum is %lld\n",sum);
				j++;
				pos++;
				if(sum==k)
				break;
			}
			long long int p;
			sum=0;
			for(i=j-1,p=0;i>=0;i--,p++)
			{
				if(a[i])
				sum+=pow(2,p);
			}
			printf("%lld\n",sum);
		}
		else
		printf("%lld\n",k);
	}
	return 0;
}