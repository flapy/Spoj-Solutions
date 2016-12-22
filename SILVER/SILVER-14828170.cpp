#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base :: sync_with_stdio(false);
	int n;
	cin>>n;
	while(n!=0)
	{
		int cnt=0;
		while(n>1)
		{
			n=n/2;
			cnt++;
		}
		cout<<cnt<<"\n";
		cin>>n;
	}
	return 0;
}