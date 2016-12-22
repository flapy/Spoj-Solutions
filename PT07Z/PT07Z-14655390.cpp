#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include<queue>
using namespace std;

#define MOD 1000000007LL
#define LL long long
#define ULL unsigned long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)
#define slu(n) scanf("%llu",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pnl printf("\n")
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define CL(a,b) memset(a,b,sizeof(a))
#define GOLD ((1+sqrt(5))/2)
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
vector <int> v[10001];
int last;
int bfs(int j,int n){
	
	//vector <int> q;
	queue<int> q;
	q.push(j);
	int d[100005];
	map<int,bool>visited;
	visited[j]=true;

	for(int i=0;i<=n;i++)
	d[i]=0;
	while(!q.empty())
	{
		j=q.front();
		q.pop();
		int k= v[j].size();
		for(int i=0;i<k;i++){
			if(visited[v[j][i]]!=true){
			//q.push_back(v[j][i]);
			visited[v[j][i]]=true;
			d[v[j][i]]=d[j]+1;
			q.push(v[j][i]);
			last=v[j][i];
			}
		}
	}
	return d[last];
}
	
	// DB(maxx);
	// DB(j);
int main()
{
    
    int t,i,a,b,j,N,K;
    scanf("%d",&t);
    //map<ULL int,ULL int>a,b;
    //vector <int>v[t+1];
    REP(i,t-1){
    	cin>>a>>b;
    	v[a].push_back(b);
    	v[b].push_back(a);
    	//cout<<v[a][b]<<"\n";
    }
   	// DB(bfs(1));
   	// DB(last);'
   	bfs(1,t);
   	//cout<<last;
   	cout<<bfs(last,t);
   	// DB(bfs(last));
  // 	for(i=1;i<=t;i++)
   	//DB(v[i].size());
    return 0;
}