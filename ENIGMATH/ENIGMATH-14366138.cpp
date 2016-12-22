#include<bits/stdc++.h>
#define gcd                         __gcd
using namespace std;
int main()
{
	long long int t,a,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		long long int x=gcd(a,b);
		a=a/x;
		b=b/x;
		printf("%lld %lld\n",b,a);
	}
	return 0;
}