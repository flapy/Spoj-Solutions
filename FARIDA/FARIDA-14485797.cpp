#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,a[10005],n,dp[10004];
	long long int t;
	long long int c=1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==0)
		{
			printf("Case %lld: %lld\n",c,0);c++;
			continue;
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);	
		}
		i=0;
		dp[0]=a[i];
		for(i=1;i<n;i++)
		{
			if(i==1)
			dp[i]=max(dp[i-1],a[i]);
			else
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
			printf("Case %lld: %lld\n",c,dp[n-1]);c++;
	}
	return 0;
}