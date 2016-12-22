#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,a,save;
	scanf("%lld",&t);
	while(t--)
	{
		map<long long int,long long int> pos;
		map<long long int,long long int> neg;
		bool flag=false;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a>=0)
			{
				pos[a]++;
				if(pos[a]>n/2 &&!flag)
				{
					flag=true;
					save=a;
				}
			}
			else
			{
				neg[-a]++;
				if(neg[a]>n/2 && !flag)
				{
					flag=true;
					save=a;
				}
			}
		}
		if(flag)
		{
			printf("YES %lld\n",save);
		}
		else
		printf("NO\n");
	}
	return 0;
}