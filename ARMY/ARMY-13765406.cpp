#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,i,j;
	scanf("%lld",&t);
	while(t--)
	{
		printf("\n");
		long long int ng,mg,a[100005],b[100005];
		scanf("%lld %lld",&ng,&mg);
		for(i=0;i<ng;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<mg;i++)
		scanf("%lld",&b[i]);
		sort(a,a+ng);
		sort(b,b+mg);
		for(i=0,j=0;i<ng && j<mg;)
		{
			
			if(a[i]<b[j])
			i++;
			else
			j++;
		}
		if(i==ng)
		printf("MechaGodzilla\n");
		else
		printf("Godzilla\n");
	}
	return 0;
}