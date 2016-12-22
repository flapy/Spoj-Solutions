#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,n,sum;
		scanf("%lld %lld",&a,&b);
		sum=(b*b)+b-(a*b)-a;
		n=sum/(b+1);
		printf("%lld\n",sum-(n*(n-1))/2);
	}
	return 0;
}