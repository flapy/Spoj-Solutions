#include<stdio.h>
#include<list>
using namespace std;
int time=0;
list<int> adj[20004];
int parent[20004],colour[20004];
//int finish_time[10],start_time[10];
void add_edge(long long int u,long long int v);
bool dfs(long long int u);
list<int> topo;
int main()
{
	long long int n,u,v,i=0,e;
	//printf("Enter number of vertices in the graph");
	scanf("%lld %lld",&n,&e);
	while(i<e)
	{
		scanf("%lld %lld",&u,&v);
		add_edge(u,v);
		add_edge(v,u);
		i++;
	}
	//0-white 1-grey 2-black
	for(i=1;i<=n;i++)
	{
		colour[i]=0;
		parent[i]=-1;
	}
	int cnt=0;
	int flag=1;
	for(i=1;i<=n;i++)
	{
		if(colour[i]==0 && cnt==0)
		{
			cnt++;
			if(dfs(i))
			{
				printf("NO\n");
				flag=0;
				break;
			}
		}
		else if(colour[i]==0)
		{
			flag=0;
			printf("NO\n");
			break;
		}
	}
	if(flag)
	printf("YES\n");
	/*list<int> ::iterator l;int p=0;
	for(l=topo.end();l!=topo.begin();l--)
	{
		if(p==0)
		{
			p++;
			continue;
		}
		printf("%d ",*l);
	}
	printf("%d\n",*l);
	printf("\n");*/
	return 0;
}
void add_edge(long long int u,long long int v)
{
	adj[u].push_back(v);
}
bool dfs(long long int u)
{
	colour[u]=1;
//	time++;
//	start_time[u]=time;
	list<int> :: iterator i;
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(colour[*i]==0)
		{
			parent[*i]=u;
			dfs(*i);
		}
		else if(colour[*i]!=0 && parent[u]!=*i)
		{
			return true;
		}
	}
	colour[u]=2;
//	time++;
	return false;
//	finish_time[u]=time;
}