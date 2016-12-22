#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		map<string,int> m;
		int n;
		scanf("%d\n",&n);
		string s;
		for(int i=0;i<n;i++)
		{
			getline(cin,s);
			m[s]++;
		}
		map<string,int> :: iterator j;
		for(j=m.begin();j!=m.end();j++)
		{
			cout<<j->first;
			printf(" %d\n",j->second);
		}
	}
	return 0;
}