#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	long long int sum=0;
	long long int dig[62]={0,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296,8589934592,17179869184,34359738368,68719476736,137438953472,274877906944,549755813888,1099511627776,2199023255552,4398046511104,8796093022208,17592186044416,35184372088832,70368744177664,140737488355328,281474976710656,562949953421312,1125899906842624,2251799813685248,4503599627370496,9007199254740992,18014398509481984,36028797018963968,72057594037927936,144115188075855};
	long long int i;
	for(i=1;i<=60;i++)
	{
		dig[i]=dig[i-1]+dig[i];
	//	cout<<i<<" "<<dig[i]<<endl;
	}
	while(n--)
	{
		long long int k;
		cin>>k;
		long long int  di=lower_bound(dig,dig+61,k)-dig;
		//cout<<di<<endl;
		if(di==1)
		{
			if(k==1)
			cout<<"5\n";
			else
			cout<<"6\n";
		}
		else if(dig[di]==k)
		{
			for(int i=0;i<di;i++)
			{
				cout<<6;
			}
			cout<<endl;
		}
		else
		{
			int arr[25];
			int cnt=0;
			long long int n_dig=k-dig[di-1]-1;
			for(int i=0;i<di;i++)
			{
				int ans=n_dig & 1<<i;
				if(ans==0)
				{
					arr[cnt++]=5;
				}
				else
				arr[cnt++]=6;
			}
			for(int i=cnt-1;i>=0;i--)
			cout<<arr[i];
			cout<<endl;
		}
	}
	return 0;
}