// After Solution Seeing :(
#include<bits/stdc++.h>
using namespace std;
long long int a[1000005],n,c;
bool f(int d)
{
	int cows=1;
	long long int i,last;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			last=a[0];
			continue;
		}	
		if(a[i]-last>=d)
		{
			cows++;
			last=a[i];
			if(cows==c)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	long long int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>c;
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long int end=a[n-1]-a[0];
		long long int start=0;
		while(start+1<end)
		{
			int mid=(start+end)/2;
			if(f(mid))
			{
				start=mid;
			}
			else
			{
				end=mid;
			}
		}
		cout<<start<<endl;
	}
	return 0;
}