#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,a[1005],b[1005],k,m,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d",&n);
		for( i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&b[i]);
		}
		int ans;
		int j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==0 && j==0)
				ans=abs(a[i]-b[j]);
				else
				ans=min(ans,abs(a[i]-b[j]));
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}