#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int i,l,cnt=0;
		l=s.length();
		for(i=0;i<l;i++)
		{
			if(i%2==0)
			{
				if(s[i]>=65 && s[i]<=90)
				{
					continue;
				}
				else
				{
					cnt++;
				}
			}
			else
			{
				if(s[i]>=97 && s[i]<=122)
				continue;
				else
				cnt++;
			}
		}
		int cnt1=0;
		for(i=0;i<l;i++)
		{
			if(i%2==0)
			{
				if(s[i]>=97 && s[i]<=122)
				{
					continue;
				}
				else
				{
					cnt1++;
				}
			}
			else
			{
				if(s[i]>=65 && s[i]<=90)
				continue;
				else
				cnt1++;
			}
		}
		printf("%d\n",cnt<cnt1?cnt:cnt1);
	}
	return 0;
}