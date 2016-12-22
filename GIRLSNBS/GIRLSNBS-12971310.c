#include<stdio.h>
#include<math.h>
int main()
{
	long long int g,b,ans;
	while(1)
	{
		scanf("%lld %lld",&g,&b);
		if(g==-1 && b==-1)
		break;
		else 
		{
			if(g>b)
			{
				long long int r=ceil((double)g/(b+1));
				printf("%lld\n",r);
			}
			else
			{
				long long int r=ceil((double)b/(g+1));
				printf("%lld\n",r);
			}
		}
	}
	return 0;
}