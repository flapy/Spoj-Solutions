#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  int no=1;
  while(1)
  {
    char s[100][100];
    pair<int,int> p[1000005];
    int k=0;
    bool visited[55][55];
    for(int i=0;i<=n+1;i++)
    {
      for(int j=0;j<=m+1;j++)
      {
		s[i][j]='#';
    	visited[i][j]=false;
    	}
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=m;j++)
      {
	cin>>s[i][j];
	//cout<<s[i][j]<<endl;
	if(s[i][j]=='A')
	{
	  p[k++]=make_pair(i,j);
	}
      }
    }
    int ans=INT_MIN;
    for(int i=0;i<k;i++)
    {
      queue<pair<int,int> > q;
      q.push(p[i]);
      int cnt=0;
      char last='A';
      while(!q.empty())
      {
	 int x,y;
	  x=q.front().first;
	  y=q.front().second;
	  q.pop();
	  int siz=q.size();
	  int c=s[x][y+1];
	  //cout<<c<<" "<<s[x][y]+1<<endl;
	  if(s[x+1][y]==s[x][y]+1 && visited[x+1][y]==false)
	  {
	  	visited[x+1][y]=true;
	    if(s[x+1][y]>last)
	    last=s[x+1][y];
	    q.push(make_pair(x+1,y));
	  }
	  if(s[x][y+1]==s[x][y]+1 && visited[x][y+1]==false)
	  {
	  	visited[x][y+1]=true;
		if(s[x][y+1]>last)
	    last=s[x][y+1];
	    //cout<<"MAIN";
	    q.push(make_pair(x,y+1));
	  }
	  if(s[x-1][y]==s[x][y]+1 && visited[x-1][y]==false)
	  {
	  	visited[x-1][y]=true;
		if(s[x-1][y]>last)
	    last=s[x-1][y];
	    q.push(make_pair(x-1,y));
	  }
	  if(s[x][y-1]==s[x][y]+1 && visited[x][y-1]==false)
	  {
	  	visited[x][y-1]=true;
	if(s[x][y-1]>last)
	    last=s[x][y-1];
	    q.push(make_pair(x,y-1));
	  }
	  if(s[x+1][y-1]==s[x][y]+1 && visited[x+1][y-1]==false)
	  {
	  	visited[x+1][y-1]=true;
		if(s[x+1][y-1]>last)
	    last=s[x+1][y-1];
	    q.push(make_pair(x+1,y-1));
	  }
	  if(s[x-1][y+1]==s[x][y]+1 && visited[x-1][y+1]==false)
	  {
	  	visited[x-1][y+1]=true;
		if(s[x-1][y+1]>last)
	    last=s[x-1][y+1];
	    q.push(make_pair(x-1,y+1));
	  }
	  if(s[x-1][y-1]==s[x][y]+1 && visited[x-1][y-1]==false)
	  {
	  	visited[x-1][y-1]=true;
		if(s[x-1][y-1]>last)
	    last=s[x-1][y-1];
	    q.push(make_pair(x-1,y-1));
	  }
	  if(s[x+1][y+1]==s[x][y]+1 && visited[x+1][y+1]==false)
	  {
	  	visited[x+1][y+1]=true;
		if(s[x+1][y+1]>last)
	    last=s[x+1][y+1];
	    q.push(make_pair(x+1,y+1));
	  }
	  if(last==65)
	  //cout<<"sfsdf";
	    break;

      }
	  cnt=last-65+1;
      ans=max(ans,cnt);
    }
	if(k==0)
	cout<<"Case "<<no<<": "<<0<<endl;//
	else
    	cout<<"Case "<<no<<": "<<ans<<endl;//
    cin>>n>>m;
    no++;
    if(n==0 && m==0)//Case_1:_4
    {
      break;
    }
  }
  return 0;
}
