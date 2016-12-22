#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base:: sync_with_stdio(false);
	int t,n,m;
	cin>>t;
	while(t--)
	{
		list<pair<int,int> > pq;
		cin>>n>>m;
		int store;
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(m==i)
			store=a;
			pq.push_back(make_pair(a,i));
		}
		list<pair<int,int> > ::iterator i,j;
		for(i=pq.begin();i!=pq.end();i++)
		{
			j=++i;
			i--;
			bool flag=false;
			for(;j!=pq.end();j++)
			{
				if(j->first>i->first)
				{
					flag=true;
					pq.push_back(make_pair(i->first,i->second));
					pq.erase(i);
					i--;
					break;
				}	
			}
			if(!flag)
			{
				cnt++;
				pair<int,int> p=make_pair(store,m);
				if(*i==p)
				{
					break;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}