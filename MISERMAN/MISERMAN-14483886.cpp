#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,fair[101][101],a[101][101];
	scanf("%d %d",&n,&m);
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<=m+1;j++)
		{
			fair[i][j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i-1==0)
			fair[i][j]=a[i][j];
			else if(j-1==0)
			{
				fair[i][j]=a[i][j]+min(fair[i-1][j+1],fair[i-1][j]);
			}
			else if(j==m)
			{
				fair[i][j]=a[i][j]+min(fair[i-1][j-1],fair[i-1][j]);
			}
			else
			{
				//printf("%d ",a[i][j]);
				fair[i][j]=a[i][j]+min(fair[i-1][j-1],min(fair[i-1][j+1],fair[i-1][j]));
			}
		}
	}
	int mi;
	for(i=1;i<=m;i++)
	{
		if(i==1)
		{
			mi=fair[n][i];
		}
		else
		mi=min(fair[n][i],mi);
	}
	printf("%d\n",mi);
	return 0;
}