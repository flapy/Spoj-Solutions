#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int r,c;
		cin>>c>>r;
		char s[1004][1004];
		for(int i=0;i<=r+1;i++)
			{
				for(int j=0;j<=c+1;j++)
				{
					s[i][j]=(char)'&';
					//cout<<s[i][j];
				}
			}
			for(int i=1;i<=r;i++)
			{
				for(int j=1;j<=c;j++)
				cin>>s[i][j];
			}
		bool flag=false;
		pair<int,int > st;
		for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=c;j++)
			{
//				cout<<s[i][j];
				if(s[i][j]=='.')
				{
					//cout<<i<<" "<<j<<endl;
					flag=true;
					st=make_pair(i,j);
					break;
				}
			}
			if(flag)
			break;
		}
		//cout<<1<<endl;
		queue<pair<int,int> > q;
		q.push(st);
		map<pair<int,int> ,bool> visit;
		pair<int,int> last;
		while(!q.empty())
		{
			//cout<<"here"<<endl;
			pair<int,int> u=q.front();
			q.pop();
			last=u;
			visit[u]=true;
			int i,j;
			i=u.first;
			j=u.second;
			if(s[i+1][j]=='.' && !visit[make_pair(i+1,j)])
			{
							visit[make_pair(i+1,j)]=true;
							q.push(make_pair(i+1,j));
			}
			if(s[i][j+1]=='.' && !visit[make_pair(i,j+1)])
			{
							visit[make_pair(i,j+1)]=true;
							q.push(make_pair(i,j+1));
			}
			if(s[i-1][j]=='.' && !visit[make_pair(i-1,j)])
			{
							visit[make_pair(i-1,j)]=true;
							q.push(make_pair(i-1,j));
			}
			if(s[i][j-1]=='.' && !visit[make_pair(i,j-1)])
			{
				visit[make_pair(i,j-1)]=true;
				q.push(make_pair(i,j-1));
			}
		}
		q.push(last);
		map<pair<int,int> ,bool> visit1;
		map<pair<int,int> ,int> d;
		while(!q.empty())
		{
			pair<int,int> u=q.front();
			q.pop();
			last=u;
			visit1[u]=true;
			int i,j;
			i=u.first;
			j=u.second;
			if(s[i+1][j]=='.' && !visit1[make_pair(i+1,j)])
			{
				d[make_pair(i+1,j)]=d[u]+1;
							visit1[make_pair(i+1,j)]=true;
							q.push(make_pair(i+1,j));

			}
			if(s[i][j+1]=='.' && !visit1[make_pair(i,j+1)])
			{
				d[make_pair(i,j+1)]=d[u]+1;
							visit1[make_pair(i,j+1)]=true;
						q.push(make_pair(i,j+1));
			}
			if(s[i-1][j]=='.' && !visit1[make_pair(i-1,j)])
			{
				d[make_pair(i-1,j)]=d[u]+1;
				q.push(make_pair(i-1,j));
							visit1[make_pair(i-1,j)]=true;

			}
			if(s[i][j-1]=='.' && !visit1[make_pair(i,j-1)])
			{
				q.push(make_pair(i,j-1));
				d[make_pair(i,j-1)]=d[u]+1;
				visit1[make_pair(i,j-1)]=true;
			}
		}
		cout<<"Maximum rope length is "<<d[last]<<"."<<endl;
	}
	return 0;
}