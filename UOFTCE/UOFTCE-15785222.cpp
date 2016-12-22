#include <iostream>
#include<queue>
#include<map>
#include<utility>
#include<climits>
using namespace std;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
		int m;
		cin>>m;
		while(m--)
		{
			int r,c;
			cin>>r>>c;
			char a[r+4][c+4];
			pair<int,int> pos;
			pair<int,int> arr[100004];
			int cnt=0;
			for(int i=0;i<=r+1;i++)
			{
				for(int j=0;j<=c+1;j++)
				{
					if(i==0 || j==0 || i==r+1 ||j==c+1)
					{
						a[i][j]='#';
						continue;
					}
					cin>>a[i][j];
					if(a[i][j]=='C')
					{
						pos=make_pair(i,j);
					}
					else if(a[i][j]=='S')
					{
						arr[cnt++]=make_pair(i,j);	
					}
				}
			}
			queue<pair<int,int> > q;
			q.push(pos);
			map<pair<int,int> ,bool> visit;
			map<pair<int,int> ,int> d;
			visit[pos]=true;
			d[pos]=0;
			pair<int,int> max_pos;
			int ans=INT_MIN;
			while(!q.empty())
			{
				pair<int,int> temp=q.front();
				q.pop();
				int x=temp.first;
				int y=temp.second;
				int temp_x;
				int temp_y;
				if(a[x+1][y]!='#' && !visit[make_pair(x+1,y)])
				{
					visit[make_pair(x+1,y)]=true;
					d[make_pair(x+1,y)]=d[temp]+1;
					temp_x=x+1;
					temp_y=y;
					q.push(make_pair(temp_x,temp_y));
				}
				if(a[x-1][y]!='#' && !visit[make_pair(x-1,y)])
				{
					visit[make_pair(x-1,y)]=true;
					d[make_pair(x-1,y)]=d[temp]+1;
					temp_x=x-1;
					temp_y=y;
					q.push(make_pair(temp_x,temp_y));
				}
				if(a[x][y-1]!='#' && !visit[make_pair(x,y-1)])
				{
					temp_x=x;
					temp_y=y-1;
					visit[make_pair(x,y-1)]=true;
					d[make_pair(x,y-1)]=d[temp]+1;
					q.push(make_pair(temp_x,temp_y));
				}
				if(a[x][y+1]!='#' && !visit[make_pair(x,y+1)])
				{
					temp_x=x;
					temp_y=y+1;
					visit[make_pair(x,y+1)]=true;
					d[make_pair(x,y+1)]=d[temp]+1;
					q.push(make_pair(temp_x,temp_y));
				}
			}
			long long int sum=0;
			int flag=1;
			for(int i=0;i<cnt;i++)
			{
				sum+=60+2*d[arr[i]];
				ans=max(d[arr[i]],ans);
			}
			cout<<sum-ans<<endl;
		}
	return 0;
}