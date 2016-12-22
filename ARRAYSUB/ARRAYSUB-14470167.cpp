#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[100005],k,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		int max=a[i];
		if(i+k<=n)
		{
			for(j=i;j<i+k;j++)
			{
				if(a[j]>max)
				max=a[j];
			}
			printf("%d ",max);
		}
	}
	printf("\n");
	return 0;
}