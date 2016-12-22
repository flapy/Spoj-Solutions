#include<stdio.h>
#include<list>
#include<vector>
#include<set>
using namespace std;
     #define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main()
{
	int n, m;
	n=read_int();
	m=read_int();
	int u, v;
	int in_degree[10004] = { 0 };
	list<int> adj[10005];
	for (int i = 0; i < m; i++)
	{
		u=read_int();
		v=read_int();
		//in_degree[v]++;
		adj[u].push_back(v);
	}
		list<int> ::iterator itr;
	for(int i=1;i<=n;i++)
	{
		if(adj[i].size()!=0)
		{
			for(itr=adj[i].begin();itr!=adj[i].end();itr++)
			{
				in_degree[*itr]++;	
			}
		}
	}
	set<int> q;
	for (int i = 1; i <= n; i++)
	{
		if (in_degree[i] == 0)
		{
			q.insert(i);
		}
	}
	int cnt = 0;
	vector<int> ve;
	while (!q.empty())
	{
		int u = *q.begin();
		ve.push_back(u);
		cnt++;
		//cnt++;
		//	ma[cnt]=u;
		for (itr = adj[u].begin(); itr != adj[u].end(); itr++)
		{
			if (--in_degree[*itr] == 0)
			{
				q.insert(*itr);
			}
		}
		q.erase(u);
	}
	if (cnt != n)
	{
		printf("Sandro fails.");
	}
	else
	{
		vector<int> ::iterator itr;
		for (itr = ve.begin(); itr != ve.end(); itr++)
			printf("%d ", *itr);
		printf("\n");
	}
	return 0;
}