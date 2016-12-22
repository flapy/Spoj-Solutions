#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[105][105],m,n,dp[105][105];
		scanf("%d %d",&m,&n);
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<=m+1;i++)
		{
			for(int j=0;j<=n+1;j++)
			{
				dp[i][j]=0;
			}
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				dp[i][j]=a[i][j]+max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]));
			}
		}
		int max;
		for(int i=1;i<=n;i++)
		{
			if(i==1)
			{
				max=dp[m][i];
			}
			else
			{
				if(max<dp[m][i])
				max=dp[m][i];
			}
		}
		printf("%d\n",max);
	}
	return 0;
}