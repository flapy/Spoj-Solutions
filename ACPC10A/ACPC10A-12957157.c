#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	while(1)
	{
		long long int a,b,c,d,r,ans;
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a==0 && b==0 && c==0)
		break;
		if(b-a==c-b)
		{
			printf("AP ");
			d=b-a;
			ans=a+3*d;
		}
		else
		{
			printf("GP ");
			r=b/a;
			ans=a*pow(r,3);		
		}
		printf("%lld\n",ans);
	}
	return 0;
}