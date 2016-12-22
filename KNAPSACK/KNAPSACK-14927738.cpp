#include <iostream>
using namespace std;
int dp[2001][2001];
int main() {
	int s,n;
	cin>>s>>n;
	int val[2001],size[2001];
	for(int i=0;i<n;i++)
	{
		cin>>size[i]>>val[i];
	}
	int i,j;
	j=0;
	for(int i=0;i<n;i++)
	{
		dp[i][j]=0;
	}
	i=0;
	for(j=0;j<=s;j++)
	{
		if(j<size[i])
		dp[i][j]=0;
		else
		dp[i][j]=val[i];
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<=s;j++)
		{
			if(j<size[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			dp[i][j]=max(dp[i-1][j-size[i]]+val[i],dp[i-1][j]);
		}
	}
	cout<<dp[n-1][s];
	return 0;
}