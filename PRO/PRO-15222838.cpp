#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	// your code goes here
	int n;
	cin>>n;
	long long int sum=0;
	multiset<int> s;
	while(n--)
	{
		int k;
		cin>>k;
		for(int i=0;i<k;i++)
		{
			int w;
			cin>>w;
			s.insert(w);
		}
		sum+=*s.rbegin()-*s.begin();
		s.erase(s.begin());
		s.erase(--s.end());
	}
	cout<<sum<<endl;
	return 0;
}