#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		pair<int,int> p[100005];
		for(int i=0;i<n;i++)
		{
			int s,e;
			cin>>s>>e;
			p[i]=make_pair(e,s);
		}
		sort(p,p+n);
		int cnt=0,temp;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				cnt++;
				temp=p[i].first;
				continue;
			}
			if(p[i].second>=temp)
			cnt++,temp=p[i].first;
		}
		cout<<cnt<<endl;
	}
	return 0;
}