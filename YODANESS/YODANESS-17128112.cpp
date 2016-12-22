#include<bits/stdc++.h>
using namespace std;
void merge(int [],int ,int,int);
void partition(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		partition(arr,low,mid);
		partition(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int ans=0;
void merge(int arr[],int low,int mid,int high)
{
	int temp[30004];
	int i=low;
	int cnt=0;
	int j=mid+1;
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			temp[cnt++]=arr[i];
			i++;
		}
		else
		{
			ans+=mid-i+1;
			temp[cnt++]=arr[j];
			j++;
		}
	}
	while(i<=mid)
	{
		temp[cnt++]=arr[i];
		i++;
	}
	while(j<=high)
	{
		temp[cnt++]=arr[j];
		j++;
	}
	int k=0;
	for(int i=low;i<=high;i++)
	{
		arr[i]=temp[k++];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[30004];
		string str;
		map<string,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>str;
			m[str]=i;
		}

		int arr[30004];
		for(int i=0;i<n;i++)
		{
			arr[i]=m[s[i]];
		}
		partition(arr,0,n-1);
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}
