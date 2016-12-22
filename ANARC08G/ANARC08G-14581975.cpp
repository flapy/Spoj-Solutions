#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int test=1;
	while(n!=0)
	{
		int x,i,j;
		long long int indegree[1005],outdegree[1005];
		for(i=0;i<n;i++)
		{
			indegree[i]=outdegree[i]=0;
		}
		long long int total=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&x);
				total+=x;
				indegree[j]+=x;
				outdegree[i]+=x;
			}		
		}
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			if(indegree[i]-outdegree[i]<0)
			sum=sum-indegree[i]+outdegree[i];
		}
		printf("%d. %lld %lld\n",test,total,sum);
		scanf("%d",&n);
		test++;
	}
	return 0;
}