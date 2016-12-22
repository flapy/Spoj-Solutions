#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		string s[100005];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		//	cout<<s[i];
		}
		sort(s,s+n);
		for(int i=0;i<n;i++)
		{
			cout<<s[i]<<"\n";
		}
	}
	return 0;
}