#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];
		int dp[102][102];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		memset(dp,9999999,sizeof(dp));
		for(int i=1;i<=n;i++)
		{
			dp[i][i]=0;
		}
		int sum[101][101];
		for(int i=1;i<=n;i++)
		{
			sum[i][i]=a[i-1]%100;
			for(int j=i+1;j<=n;j++)
			{
				sum[i][j]=(sum[i][j-1]+a[j-1])%100;
			}
		}
		for(int l=2;l<=n;l++)
		{
			for(int i=1;i<=n-l+1;i++)
			{
				int j=i+l-1;
				for(int k=i;k<j;k++)
				{
					dp[i][j]=min(dp[i][k]+dp[k+1][j]+(sum[i][k]*sum[k+1][j]),dp[i][j]);
				}
			}
		}
		cout<<dp[1][n]<<endl;
	}
	return 0;
}