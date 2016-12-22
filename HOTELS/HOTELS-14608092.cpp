#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	long long int n,m;
	cin>>n>>m;
	vector<long long int > v;
	for(long long int i=0;i<n;i++)
	{
	long long int k;
		cin>>k;
		v.push_back(k);
	}
	long long int sum=0,ans;
	ans=0;
	bool flag=false;
	vector<long long int >:: iterator i;
	vector<long long int >:: iterator j;
	j=v.begin();
	for( i=v.begin();i!=v.end();i++)
	{
		sum+=*i;
		while(sum>m)
		{
			sum-=*j;
			j++;
		}
		if(sum==m)
		{
			ans=sum;
			flag=true;
			break;
		}
		ans=max(ans,sum);
	}
	cout<<ans;
	return 0;
}