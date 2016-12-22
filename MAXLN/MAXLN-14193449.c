#include<stdio.h>
int main()
{
	long long int t,r,i=1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&r);
		double ans =0.25 + 4*(r*r);
		printf("Case %lld: %.2lf\n",i,ans);
		i++;
	}
	return 0;
}