#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		int budget,n;
		cin>>budget>>n;
		if(!budget && !n)
			break;
		int fee,fun;
		pair<int,int> p[100005];
		for(int i=0;i<n;i++)
		{
			cin>>fee>>fun;
			p[i]=make_pair(fee,fun);
		}
		int dp[103][505];
		for(int i=0;i<=n;i++)
		{
			int t_fee,t_fun;
			if(i)
			{
				t_fee=p[i-1].first;
				t_fun=p[i-1].second;
			}
			for(int j=0;j<=budget;j++)
			{
				if(!i || !j)
					dp[i][j]=0; 
				else if(t_fee<=j)
				{
					dp[i][j]=max(dp[i-1][j-t_fee]+t_fun,dp[i-1][j]);
				}
				else
					dp[i][j]=dp[i-1][j];
			}
		}
		int ans_fun=dp[n][budget];
		int i=n;
		int j=budget;
		int ans_fee=0;
		for(int i=1;i<=budget;i++)
		{
			if(dp[n][i]==ans_fun)
			{
				ans_fee=i;
				break;
			}
		}
		cout<<ans_fee<<" "<<ans_fun<<endl;
	}
	return 0;
}