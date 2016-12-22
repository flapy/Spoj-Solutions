#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	int p=1;
	while(t--)
	{
		int n,x;
		cin>>n;
		long long int sum=0;
		long long int cnt=1;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			sum+=x;
			if(sum<=0)
			{
				cnt+=abs(sum);
				sum+=abs(sum);
			}
		}
		cout<<"Scenario #"<<p<<": "<<cnt<<endl;
		p++;
	}
	return 0;
}