#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char s[100005];
	
	int i=0;
	gets(s);
	while(!(strlen(s)==1 && s[0]=='*'))
	{
		bool space,ans;
		space=false;ans=true;
		char temp;
		int l=strlen(s);
		for(int i=0;i<l;i++)
		{
			if((s[i]<=90 && s[i]>=65) || s[i]==32)
			{
				
			}
			else
			s[i]-=32;
		}
		for(int i=0;i<l;i++)
		{
			if(i==0)
			{
				temp=s[i];
			}
			else if(space==true)
			{
				if(temp==s[i])
				{
					space =false;
					continue;
				}
				else
				{
					ans=false;
					break;
				}
			}
			else if(s[i]==32)
			space=true;
		}
		if(ans)
		cout<<"Y\n";
		else
		cout<<"N\n";
		gets(s);
	}
	return 0;
}