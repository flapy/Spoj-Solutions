#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,i,a[100005];
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		long long int cnt=0,ans=1;
		for(i=0;i<n;i++)
		{
			ans=(ans*(a[i]-cnt))%1000000007;
			cnt++;
		}
		printf("%lld\n",ans);
	}
	printf("KILL BATMAN\n");
	return 0;
}