#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[100004];
		pair<int,int> p[104];
		int j=0;
		map<int,char> type;
		for(int i=0;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			arr[j++]=a;
			type[a]='e';
			arr[j++]=b;
			type[b]='l';
		
		}
		int cnt=0;
		sort(arr,arr+j);
		int ans=INT_MIN;
		for(int i=0;i<j;i++)
		{
			if(type[arr[i]]=='e')
			{
				cnt++;
			}
			else
			{
				cnt--;
			}
			ans=max(cnt,ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}