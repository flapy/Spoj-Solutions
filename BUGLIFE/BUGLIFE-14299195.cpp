#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	for(long long int k=1;k<=t;k++)
	{
		bool ans=true;
		list<long long int> adj[2002];
		long long int n,m,u,v;
		scanf("%lld %lld",&n,&m);
		//printf("m= %d\n",m);
		while(m--)
		{
			scanf("%lld %lld",&u,&v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		//printf("hi\n");
			char colour[2005];
			for(long long  int i=1;i<=n;i++)
			{
				colour[i]='w';
			}
			for(long long int i=1;i<=n;i++)
			{
				if(colour[i]=='w')
				{
					colour[i]='b';
					queue<int> q;
					q.push(i);
					while(!q.empty())
					{
						char col;
						long long int x=q.front();
						q.pop();
					//	printf("Dequed %lld\n",x);
						if(colour[x]=='b')
						col='r';
						else if(colour[x]=='r')
						col='b';
						list <long long int> :: iterator i;
						for(i=adj[x].begin();i!=adj[x].end();i++)
						{
						//	printf("start id %lld\n",*i);
							if(colour[*i]=='w')
							{
								colour[*i]=col;
								q.push(*i);
							}
							else
							{
								if(colour[*i]==colour[x])
								{
									//printf("%lld %lld",*i,x);
									ans=false;
									break;
								}
							}
							if(!ans)
							break;
						}
						if(!ans)
						break;
					}
					if(!ans)
						break;
				}
			}
			printf("Scenario #%d:\n",k);
			if(ans)
			{
				printf("No suspicious bugs found!\n");
			}
			else
			{
				printf("Suspicious bugs found!\n");
			}
		}
	return 0;
}
