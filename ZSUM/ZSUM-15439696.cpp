#include <bits/stdc++.h>
using namespace std;
#define MOD 10000007
long long int po(long long int a,long long int b,long long int n)
{
    long long int d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}
int main() {
	// your code goes here
	long long int n,k;
	ios_base::sync_with_stdio(false);
	cin>>n>>k;
	while(n!=0 && k!=0)
	{
		long long int ans=(po(n,k,MOD)+po(n,n,MOD)+2*po(n-1,n-1,MOD)+2*po(n-1,k,MOD))%MOD;
		cout<<ans<<endl;
		cin>>n>>k;
	}
	return 0;
}