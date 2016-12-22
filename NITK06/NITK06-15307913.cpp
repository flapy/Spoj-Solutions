#include <iostream>
using namespace std;

int main() {
	int t;
	// your code goes here
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[10005];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int flag=1;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==0)
			continue;
			if(a[i]<=a[i+1])
			{
				a[i+1]-=a[i];
				a[i]=0;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i])
			{
				flag=0;
				break;
			}
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}