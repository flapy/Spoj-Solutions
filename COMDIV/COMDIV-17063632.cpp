#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int gcd=__gcd(a,b);
		int cnt=0;
		int temp=sqrt(gcd);
		for(int i=1;i<=temp;i++)
		{
			if(gcd%i==0)
			{
				cnt+=2;
			}
			if(i*i==gcd)
			cnt--;
		}
		printf("%d\n",cnt);
	}
	return 0;
}