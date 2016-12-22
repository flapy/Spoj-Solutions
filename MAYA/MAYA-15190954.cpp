#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	scanf("%d\n",&n);
	int a[10];
	for(int i=1;i<=7;i++)
	{
		if(i==1)
		{
			a[i]=1;
			continue;
		}
		if(i==3)
		{
			a[i]=360;
			continue;
		}
		a[i]=a[i-1]*20;
	}
	string s;
	int value[10];
	while(n)
	{
		for(int i=0;i<n;i++)
		{
			getline(cin,s);
			int l=s.length();
			int cnt=0;
			for(int j=0;j<l;j++)
			{
				if(s[j]=='.')
				{
					cnt++;
				}
				else if(s[j]==32)
				{
					continue;
				}
				else if(s[j]=='-')
				{
					cnt+=5;
				}
				else
				{
					cnt+=0;
				}
			}
			value[n-i]=cnt;
		}
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			//cout<<value[i]<<" "<<a[i]<<endl;
			ans+=(value[i]*a[i]);
		}
		cout<<ans<<endl;
		
	scanf("%d\n",&n);
	}
	return 0;
}