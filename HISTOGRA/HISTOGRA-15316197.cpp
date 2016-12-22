#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	long long int n;
	cin>>n;
	while(n)
	{
		long long int a[100005],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		stack<long long int> s;
		long long int area=INT_MIN;
		for(i=0;i<n;)
		{
			if(s.empty()  || a[s.top()]<=a[i])
			{
				s.push(i++);
			}
			else
			{
				int to=s.top();
				s.pop();
				if(s.empty())
				{
					area=max(area,a[to]*i);
				}
				else
				area=max(area,a[to]*(i-s.top()-1));
			}
		}
		while(!s.empty())
		{
			int to=s.top();
			s.pop();
			if(s.empty())
			{
				area=max(area,a[to]*i);
			}
			else
			area=max(area,a[to]*(i-s.top()-1));
		}
		cout<<area<<endl;
		cin>>n;
	}
	return 0;
}