#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[104],i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	vector<int> v;
	vector<int> v1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				v.push_back((a[i]*a[j])+a[k]);
				//printf("%d ",(a[i]*a[j])+a[k]);		
			}
		}
	}
//	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[k]!=0)
				v1.push_back((a[i]+a[j])*a[k]);
				//printf("%d ",(a[i]+a[j])*a[k]);		
			}
		}
	}
	sort(v.begin(),v.end());
	sort(v1.begin(),v1.end());
	int l=v.size(),low,high;
	long long int ans=0;
	for(i=0;i<l;i++)
	{
		low=lower_bound(v1.begin(),v1.end(),v[i])-v1.begin();
		high=upper_bound(v1.begin(),v1.end(),v[i])-v1.begin();
		ans+=high-low;
	}
	printf("%lld\n",ans);
	return 0;
}