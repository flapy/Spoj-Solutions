#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int k=n/2;
		long long int i;
		for(i=k;i>=1;i--)
		{
			if(__gcd(i,n)==1)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}