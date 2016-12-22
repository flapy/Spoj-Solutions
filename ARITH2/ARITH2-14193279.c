#include<stdio.h>
#include<string.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int i=0;
		long long int num;
		char s;
		scanf("%lld",&num);
		long long int ans=num;
		scanf(" %c",&s);
		i=2;
		//printf("%c",s);
		while(s!='=')
		{
			if(i%2==0)
			{
				scanf("%lld",&num);
				if(s=='+')
				{
					ans=ans+num;
						//printf("%lld\n",ans);
				}	
				else if(s=='-')
				{
					ans-=num;
				}
				else if(s=='*')
				{
				//	printf("%lld\n",num);
				//	printf("%lldsdhsjd\n",ans);
					ans*=num;
					//printf("%lld\n34",ans);
				}
				else if(s=='%')
				{
					ans%=num;
				}
				else if(s=='/')
				ans/=num;
			}
			else 
			{
				scanf(" %c",&s);
			}
			i++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}