#include<bits/stdc++.h>
using namespace std;
long long int a[500005];
bool mark[10000005]={false};
int main()
{
	long long int n,x;
	a[0]=0;
	mark[0]=false;
	for(long long int i=1;i<500001;i++)
	{
		x=a[i-1]-i;
		if(x>0 && !mark[x])
		{
			a[i]=x;
			mark[x]=true;
		}
		else
		{
			a[i]=x+2*i;
			mark[a[i]]=true;
		}
	}
	scanf("%lld",&n);
//	printf("For each k given in the input, print one line containing ak to the output.\n\nSample output\n");
	while(n!=-1)
	{
		printf("%lld\n",a[n]);
		scanf("%lld",&n);
	}
	return 0;
}