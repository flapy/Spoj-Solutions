#include <bits/stdc++.h>
using namespace std;
int d[104][104];
int a[104][104];
char arr[105][105];
set<pair<int,pair<int,int> > > s;
void check(int i,int j,int ox,int oy)
{
	if(arr[i][j]=='C')
	{
		return;
	}
	if(d[i][j]==INT_MAX)
	{
		d[i][j]=a[i][j]+d[ox][oy];
		s.insert(make_pair(d[i][j],make_pair(i,j)));
	}
	else
	{
		if(a[i][j]+d[ox][oy]<d[i][j])
		{
			s.erase(make_pair(d[i][j],make_pair(i,j)));
			d[i][j]=a[i][j]+d[ox][oy];
			s.insert(make_pair(d[i][j],make_pair(ox,oy)));
		}
	}
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,aq,b,time;
		cin>>n>>m;
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=m+1;j++)
			{
				if(i==0 ||j==0 ||i==n+1 ||j==m+1)
				{
					arr[i][j]='C';
					continue;
				}
				else
				cin>>a[i][j];
				d[i][j]=INT_MAX;
				arr[i][j]='D';
			}
		}
		cin>>aq>>b>>time;
//		set<pair<int,pair<int,int> > > s;
		s.insert(make_pair(a[1][1],make_pair(1,1)));
		d[1][1]=a[1][1];
		while(!s.empty())
		{
			pair<int,pair<int,int> > p=*s.begin();
			s.erase(s.begin());
			int x=p.second.first;
			int y=p.second.second;
			check(x-1,y,x,y);
			check(x+1,y,x,y);
			check(x,y+1,x,y);
			check(x,y-1,x,y);
		}
		if(d[aq][b]<=time)
		{
			cout<<"YES\n"<<time-d[aq][b]<<endl;
		}
		else
		cout<<"NO\n";
		s.clear();
	}
	return 0;
}