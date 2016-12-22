#include <bits/stdc++.h>
using namespace std;
int find(int x,int parent[])
{
	if(x==parent[x])
	return x;
	parent[x]=find(parent[x],parent);
}
void uni(int x,int y,int parent[])
{
	parent[x]=y;
}
int main() {
	// your code goes here
	//ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int p;
		scanf("%d",&p);
		int n,m;
		scanf("%d %d",&n,&m);
		pair<int,pair<int,int> > pa[300005];
		for(int i=0;i<m;i++)
		{
			int a,b;
			int c;
			scanf("%d %d %d",&a,&b,&c);
			//p = {3, {'a', 8ll}};
			//pair<int,int> x={a,b};
			pa[i]=make_pair(c,make_pair(a,b));
		}
		sort(pa,pa+m);
		int parent[300005];
		for(int i=1;i<=n;i++)
		parent[i]=i;
		long long int sum=0;
		for(int i=0;i<m;i++)
		{
			int c=pa[i].first;
			int u=pa[i].second.first;
			int v=pa[i].second.second;
			int x=find(u,parent);
			int y=find(v,parent);
			if(x!=y)
			{
				sum+=c;
				uni(x,y,parent);
			}
		}
		printf("%lld\n",sum*p);
	//	cout<<sum*p<<endl;
	}
	return 0;
}