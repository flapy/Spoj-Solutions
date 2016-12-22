#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[2002],b[2002];
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		scanf("%s",b);
		int n=strlen(a);
		int m=strlen(b);
		int i,j;
		vector <vector<int> > dp(2002, vector<int> (2002, 0));
		for(i=0;i<=m;i++)
		{
			dp[n][i]=m-i;
		}
		for(i=0;i<=n;i++)
		{
			dp[i][m]=n-i;
		}
		for(i=n-1;i>=0;i--)
		{
			for(j=m-1;j>=0;j--)
			{
				if(a[i]==b[j])
				{
					dp[i][j]=dp[i+1][j+1];
				}
				else
				{
					dp[i][j]=1+min(dp[i+1][j+1],min(dp[i][j+1],dp[i+1][j]));
				}
			}
		}
		printf("%d\n",dp[0][0]);
	}
		return 0;
}