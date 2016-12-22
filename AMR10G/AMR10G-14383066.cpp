#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k,a[100005],i;
		scanf("%lld %lld",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		long long int mi=INT_MAX;
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(i+k-1>n-1)
			break;
			mi=min(mi,a[i+k-1]-a[i]);
		}
		printf("%lld\n",mi);
	}
	return 0;
}