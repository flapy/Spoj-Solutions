#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int d,b,c;
		scanf("%lld %lld %lld",&b,&c,&d);
		printf("%lld\n",b*b-2*c);
	}
	return 0;
}