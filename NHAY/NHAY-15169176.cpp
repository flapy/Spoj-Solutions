#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int m;
	string s,s1;
	while(cin>>m>>s>>s1)
	{
		int n=s1.length();
		int c=0;
		for(int i=0;i<=n-m;i++)
		{
			bool ans=true;
			int pos;
			bool flag=true;
			for(int j=0;j<m;j++)
			{
				if(s[j]==s1[i+j] && flag)
				{
					pos=i;
					flag=false;
				}
				else if(s[j]==s1[i+j])
				{
					continue;
				}
				else
				{
					ans=false;
					break;
				}
			}
			if(ans)
			{
				cout<<pos<<endl;
				c=1;
			}
		}
		if(!c)
		cout<<endl;
	}
	return 0;
}