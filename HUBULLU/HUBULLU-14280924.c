//No proof U just submitting it .Work on this for sure!
#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,a;
		scanf("%lld %lld",&n,&a);
		if(a==0)
		printf("Airborne wins.\n");
		else
		printf("Pagfloyd wins.\n");
	}
	return 0;
}