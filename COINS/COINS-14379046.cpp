#include<bits/stdc++.h>
using namespace std;
long long int coin(long long int n);
map<int,long long int>  a;
int main()
{
	long long int n;
	while(scanf("%lld",&n)==1)
	{
		printf("%lld\n",coin(n));		
	}
	return 0;
}
long long int coin(long long int n)
{
	if(n==0)
	return 0;
	if(a[n]!=0)
	return a[n];
	long long int max=coin(n/2)+coin(n/3)+coin(n/4);
	if(max>n)
	a[n]=max;
	else
	a[n]=n;
	return a[n];
}