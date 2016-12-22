#include<stdio.h>
#include<string.h>
int main()
{
	long long int a,b,t,i,cnt;
	scanf("%lld",&t);
	while(t--)
	{
		i=0;
		char s[1003];scanf("%s",s);int l=strlen(s);
		int a=s[l-1]-48;scanf("%lld",&b);
		if(b==0)
		{
			printf("1\n");	continue;
		}
		if(a==0)
		{
			printf("0\n");	continue;
		}
		long long int p,x=a,array[1005];
		for(;;)
		{
			p=x%10;array[i]=p;
			if(i!=0)
			{
				if(p==array[0])	break;
			}
			x=x*a;i++;
		}
		long long int ans=b%i;
		if(ans)
		printf("%lld\n",array[ans-1]);
		else
		printf("%lld\n",array[i-1]);
	}
	return 0;
}
