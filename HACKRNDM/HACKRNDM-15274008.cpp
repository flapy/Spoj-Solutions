#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int a;
	int n,k;
	set<int> s;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s.insert(a);
	}
	int cnt=0;
	set<int> ::iterator itr;
	for(itr=s.begin();itr!=s.end();itr++)
	{
		if(s.find(*itr+k)!=s.end())
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}