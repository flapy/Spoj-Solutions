#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100004];
	scanf("%s",s);
	int t=1;
	while(s[0]!='-')
	{
	//	printf("HI\n");
		stack<char> stck;
		int l=strlen(s);
		int cnt=0;
		for(int i=0;i<l;i++)
		{
			if(s[i]=='{')
			{
				stck.push(s[i]);
	//			printf("HIpUsh\n");
			}
			else 
			{
				if(!stck.empty())
					stck.pop();	
				else
				stck.push('{'),cnt++;				
			}
		}
	//	printf("HI\n");
		if(!stck.empty())
		{
			cnt+=stck.size()/2;
		}//1. 2
		printf("%d. %d\n",t,cnt);t++;
		scanf("%s",s);
	}
	return 0;
}