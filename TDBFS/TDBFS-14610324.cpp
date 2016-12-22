#include<bits/stdc++.h>
using namespace std;
list<int> adj[100005];
bool visited[100005];
void dfs(int u)
{
	
	visited[u]=true;
		printf("%d ",u);

	list<int> :: iterator itr;
	for(itr=adj[u].begin();itr!=adj[u].end();itr++)
	{
		if(visited[*itr]==false)
		dfs(*itr);
	}
}
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty())
	{
		int v=q.front();
		printf("%d ",v);
		q.pop();
		list<int> ::iterator itr;
		for(itr=adj[v].begin();itr!=adj[v].end();itr++)
		{
			//printf("%d\n how did I enter?",*itr);
			if(visited[*itr]==false)
			{
				visited[*itr]=true;
				q.push(*itr);
			}
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	int cnt=1;
	while(t--)
	{
		int v,m,n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			visited[i]=false;
			adj[i].clear();
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&v);
			scanf("%d",&m);
			while(m--)
			{
				int k;
				scanf("%d",&k);
				adj[v].push_back(k);
			}
		}
		int u;
		printf("graph %d\n",cnt++);
		scanf("%d %d",&u,&v);
		while(!(u==0 && v==0))
		{
		//	printf("%d %d\n",u,v);
			if(v==0)
			{
				dfs(u);
				for(int i=1;i<=n;i++)
				{
					visited[i]=false;
				}
				printf("\n");
			}
			else
			{
				bfs(u);
				for(int i=1;i<=n;i++)
				{
					visited[i]=false;
				}
				printf("\n");
			}
			scanf("%d %d",&u,&v);
		}
		
	}
	return 0;
}