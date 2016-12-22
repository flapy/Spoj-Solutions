#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[6105],b[6105];
		scanf("%s",a);
		int n=strlen(a);
		int m=n;
		int k=0;
		vector <vector<int> > dp(6200, vector<int> (6200, 0));
		for(int i=n-1;i>=0;i--)
		{
			b[k++]=a[i];
		}
		b[k]='\0';
		for(int i=0;i<n+1;i++)
		{
			for(int j=0;j<m+1;j++)
			{
				dp[i][j]=0;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			for(int j=m-1;j>=0;j--)
			{
				if(a[i]==b[j])
				dp[i][j]=1+dp[i+1][j+1];
				else
				{
					dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
				}
			}
		}
		printf("%d\n",abs(dp[0][0]-n));
	}
	return 0;
}