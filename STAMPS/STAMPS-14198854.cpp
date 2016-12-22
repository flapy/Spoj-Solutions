#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,j=1;
	scanf("%lld",&t);
	while(t--)
	{
		long long int sum,reqd,n,a[100005];
		scanf("%lld %lld",&reqd,&n);
		int i=0;
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		sort(a,a+n);
		reverse(a,a+n);
		sum=0;
		long long int cnt=0;
		for(i=0;i<n;i++)
		{
			sum+=a[i];
			cnt++;
			if(sum>=reqd)
			break;
		}
		if(sum>=reqd)
		{
			printf("Scenario #%lld:\n",j);
			printf("%lld\n\n",cnt);
		}
		else
		{
			printf("Scenario #%lld:\n",j);
			printf("impossible\n\n");
		}
		j++;
	}
	return 0;
}