#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[1000005]={0};
	int l,r;
	while(k--)
	{
		cin>>l>>r;
		arr[l]+=1;
		arr[r+1]+=-1;
	}
	for(int i=2;i<=n;i++)
	{
		arr[i]+=arr[i-1];
	}
	sort(arr+1,arr+n+1);
	cout<<arr[n/2+1]<<endl;
	return 0; 
}