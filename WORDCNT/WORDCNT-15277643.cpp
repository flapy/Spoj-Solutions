#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
			int flag=0;

		int last;
		int cnt=0;
		int ans=INT_MIN;
		string s;
		getline(cin,s);
		//cout<<s<<endl;
		int l=s.length();
		//cout<<l<<endl;
		int ent=0;
		for(int i=0;i<l;i++)
		{
			
			if(s[i]==' ' || s[i]=='\t' || s[i]=='\r')
			{
				continue;
			}
			else
			{
				ent=1;
				int wl=0;
				while(s[i]!=' ' && s[i]!='\t' && s[i]!='\r' && i<l)
				{
				//	cout<<s[i];
					wl++;
					i++;
				}
			//	cout<<endl;
				if(flag==0)
				{
					last=wl;
					flag++;
					cnt=1;
					ans=max(cnt,ans);
				}
				else if(wl==last)
				{
					cnt++;
					ans=max(cnt,ans);
				}
				else
				{
					cnt=1;
					ans=max(cnt,ans);
					last=wl;
				}
				i--;
			}
			//cout<<i<<endl;
		}
		if(ent)
		cout<<ans<<endl;
		else
		cout<<"0\n";
	}
	return 0;
}