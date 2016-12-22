#include<stdio.h>
int main()
{
	long long int n=-1,a[100001];
	while(n!=0)
	{
		long long int i,j;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
		}
		long long int flag=1,temp;
		for(i=1;i<=n;i++)
		{
			if(a[a[i]]!=i)
			{
				
				flag=0;
				break;
			}
		}
		if(n)
		{
			if(flag)
			{
				printf("ambiguous\n");
			}
			else
			{
				printf("not ambiguous\n");
			}
		}
	}
	return 0;
}