#include <bits/stdc++.h>
using namespace std;
int sum1[256000002];
int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int cnt=0;
	int a[4002],b[4002],c[4002],d[4002];
	for(int i=0;i<n;i++)
	{
			scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum1[k++]=a[i]+b[j];
		//	cout<<sum1[k-1]<<" ";
		}
	}
		 sort(sum1,sum1+k);
		 /*
		 pair<int*, int*> range = equal_range(sum, sum + nn, -s);
            count += range.second - range.first;*/
//	cout<<endl;
	int k2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			//c[i]+d[j];
			int x=lower_bound(sum1,sum1+k,-(c[i]+d[j]))-sum1;
		//	int y=upper_bound(sum1,sum1+k,-(c[i]+d[j]))-sum1;
			if(x<k)
			{
				if(sum1[x]==-(c[i]+d[j]))
				{
					int y=x+1;
					while(y<k && sum1[x]==sum1[y])
					{
						cnt++;
						y++;
					}
					cnt++;
				}
			//	cout<<sum2[k2-1]<<" ";
			}
		}
	}
	// sort(sum2,sum2+k2);
	 //for(int i=0;i<k2;i++)
	 //cout<<sum2[i]<<" ";
	// cout<<endl;
	printf("%d\n",cnt);
	/*int k3,k4;
	k3=k4=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum3[k3++]=a[i]+c[j];
		}
	}
	sort(sum3,sum3+k3);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum4[k4++]=d[i]+b[j];
		}
	}
	for(int i=0;i<k4;i++)
	{
		int x=lower_bound(sum3,sum3+k3,-sum4[i])-sum3;
		if(x<k3)
		{
			if(sum3[x]==-sum4[i])
			cnt++;
		}
	}
	int k5,k6;
	k5=k6=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum5[k5++]=a[i]+d[j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum6[k6++]=c[i]+b[j];
		}
	}
	sort(sum5,sum5+k5);
	for(int i=0;i<k6;i++)
	{
		int x=lower_bound(sum5,sum5+k5,-sum6[i])-sum5;
		if(x<k5)
		{
			if(sum5[x]==-sum6[i])
			cnt++;
		}
	}
	cout<<cnt<<endl;*/
	return 0;
}