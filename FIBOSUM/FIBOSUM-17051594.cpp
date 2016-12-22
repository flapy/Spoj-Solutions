#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define lli long long int
map<lli,lli> F;
lli f(lli n) {
	if (F.find(n)!=F.end()) 
	{
		return F[n];
	}
	lli k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % MOD;
	} else { // n=2*k+1
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % MOD;
	}
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	F[0]=1;
	F[1]=1;
	while(t--)
	{
		lli a,b;
		cin>>a>>b;
		cout<<(f(b+1)-f(a)+MOD)%MOD<<endl;
	}
	return 0;
}