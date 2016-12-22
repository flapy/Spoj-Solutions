#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int cpp=0,java=0;
		int l=s.length(),i=0,err=0;
		if(s[l-1]=='_' ||s[0]=='_' ||(s[0]>=65 &&s[0]<=90))
		{
			printf("Error!\n");
			continue;
		}
		while(i<l)
		{
			if(s[i]=='_')
			{
				cpp=1;
			}
			if(s[i]=='_' && s[i+1]=='_')
			{
				err=1;
				break;
			}
			i++;
		}
		i=0;
		int errj=0;
		while(i<l)
		{
			if(s[i]>=65 && s[i]<=90)
			{
		//		printf("%c\n",s[i]);
				java=1;break;
			}
			i++;
		}
		//printf("%d %d\n",cpp,java);
		if((cpp && java) ||err || errj)
		printf("Error!\n");
		else if(cpp)
		{
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='_')
				{
					s.erase(i,1);
					s[i]=s[i]-32;
				}
			}
			cout<<s<<"\n";
		//	printf("c++");
		}
		else
		{
			//printf("%d\n",l);
			bool ans=false;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]>=65 && s[i]<=90)
				{
					s.insert(i,"_");
					i++;
					ans=true;
				}
				if(ans)
				{
					s[i]=s[i]+32;
					ans=false;
				}
			}
			cout<<s<<"\n";
		//	printf("java");
		}
	}
	return 0;
}