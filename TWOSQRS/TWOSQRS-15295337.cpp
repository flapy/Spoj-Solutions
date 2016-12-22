#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int s=sqrt(n);
		int flag=0;
		if(s*s==n)
		printf("Yes\n");
		else
		{
			for(long long int i=s;i>=1;i--)
			{
				long long int n1,n2,on2;
				n1=i*i;
				n2=sqrt(n-n1);
				if(n2*n2==(n-n1))
				{
					printf("Yes\n");
					flag=1;
					break;
				}
			}
			if(!flag)
			printf("No\n");
		}
	}
	return 0;
}