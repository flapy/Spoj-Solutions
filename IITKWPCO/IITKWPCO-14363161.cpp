#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		bool mark[106]={false};
		int n,a[103],i,j;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			mark[i]=true;
		}
		sort(a,a+n);
		int cnt=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]==2*a[i] && mark[j] && mark[i])
				{
					cnt++;
					mark[j]=mark[i]=false;
					break;
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}