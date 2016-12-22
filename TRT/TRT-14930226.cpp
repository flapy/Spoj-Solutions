#include <iostream>
using namespace std;
int dp[2001][2001];
int n;
int profit(int a[],int s,int e)
{
	if(s>e)
	{
		return 0;
	}
	if(dp[s][e]!=-1)
	return dp[s][e];
	int day=n-(e-s);
 	return dp[s][e]=max(profit(a,s+1,e)+day*a[s],profit(a,s,e-1)+day*a[e]);
}
int main() {
	// your code goes here
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		dp[i][j]=-1;
	}
	int a[2005];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=profit(a,0,n-1);
	cout<<ans;
	return 0;
}