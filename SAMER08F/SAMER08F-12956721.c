//Chirag Agarwal
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
	long long int n,total_square,ans;
	while(1)
	{
		scanf("%lld",&n);
		if(n==0)
		break;
		ans=(n*(n+1)*(2*n+1))/6;
		printf("%lld\n",ans);
	}
	return 0;
}