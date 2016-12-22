#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	scanf("%lld",&n);
	while(n)
	{
		vector<long long int> a;
		for(int i=0;i<n;i++)
		{
			long long int k;
			scanf("%lld",&k);
			a.push_back(k);
		}
		vector<long long int> b;
		scanf("%lld",&m);
		for(int i=0;i<m;i++)
		{
			long long int k;
			scanf("%lld",&k);
			b.push_back(k);
		}
		long long int sum_a[10004]={0};
		sum_a[0]=a[0];
		long long int sum_b[10004]={0};
		sum_b[0]=b[0];
		for(int i=1;i<n;i++)
		{
			sum_a[i]=a[i]+sum_a[i-1];
		}
		for(int i=1;i<m;i++)
		{
			sum_b[i]=b[i]+sum_b[i-1];
		}
		long long int ans=0;
		long long int i_a,i_b;
		i_a=i_b=0;
		int cnt=0;
		for(long long int i=0;i<n;i++)
		{
			long long int l=lower_bound(b.begin(), b.end(),a[i])-b.begin();
			if(l>=m)
			{
				break;
			}
			if(l<m)
			{
				if(b[l]==a[i])
				{
					if(cnt==0)
					{
						cnt++;
						ans+=max(sum_a[i],sum_b[l]);
					}	
					else
					{
						ans+=max(sum_a[i]-sum_a[i_a],sum_b[l]-sum_b[i_b]);
					}
					i_a=i;
					i_b=l;
				}
			}
		}
		if(cnt==0)
		printf("%lld\n",max(sum_a[n-1],sum_b[m-1]));
		else
		printf("%lld\n",ans+max(sum_a[n-1]-sum_a[i_a],sum_b[m-1]-sum_b[i_b]));
		scanf("%lld",&n);
	}
	return 0;
}