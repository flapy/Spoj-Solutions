#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char s[100005];
	while(scanf("%s",s)==1)
	{
		int l=strlen(s);
		for(int i=0;i<l;i++)
		{
			if(i==l-1)
			{
				cout<<s[i];
				continue;
			}
			int cnt=0;
			int pos=i;
			i++;
			cnt++;
			int start=i;
			while(s[i]==s[pos])
			{
				i++;
				cnt++;
				start=i;
			}
			if(cnt>3)
			{
				cout<<cnt<<"!"<<s[pos];
			}
			else if(cnt==3)
			{
				cout<<s[pos]<<s[pos]<<s[pos];
			}
			else if(cnt==2)
			{
				cout<<s[pos]<<s[pos];
			}
			else
			{
				cout<<s[pos];
			}
			i=start-1;
		}	
		cout<<endl;
	}
	return 0;
}