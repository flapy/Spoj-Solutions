#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n)
	{
		if(n==1)
		{
			cout<<5<<endl;
			cin>>n;
			continue;
		}
		else if(n==2)
		{
			cout<<12<<endl;
			cin>>n;
			continue;
		}
		cout<<5*((n*(n+1))/2)-((n-1)*(6+(n-2)*2))/2<<endl;
		cin>>n;
	}
	return 0;
}