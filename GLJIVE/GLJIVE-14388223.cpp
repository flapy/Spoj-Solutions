#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[20];
	n=10;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int ans;
	bool flag=false;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(sum>=100)
			{
				flag=true;
				int x=sum-100;
				int y=100-(sum-a[i]);
				if(x<=y)
				{
					ans=sum;
				}
				else
				ans=sum-a[i];
				break;
			}
		}
		if(flag)
		printf("%d\n",ans);
		else
		printf("%d\n",sum);
	return 0;
}