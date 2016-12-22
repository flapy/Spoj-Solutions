#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,m,a[200][200];
	char s[200][200];
	pair<int,int> p[200];
	int k=0;
	int x[100005],y[100005];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		for(int j=0;j<m;j++)
		{
			a[i][j]=s[i][j]-48;
			if(s[i][j]=='1')
			{
				x[k]=i;
				y[k]=j;
				k++;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int d;
			if(a[i][j]==1)
			{
				a[i][j]=0;
				printf("%d ",a[i][j]);
				continue;
			}
			for(int q=0;q<k;q++)
			{
				if(q==0)
				d=abs(x[q]-i)+abs(y[q]-j);
				d=min(d,abs(x[q]-i)+abs(y[q]-j));
			}
			a[i][j]=d;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
	return 0;
}