#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int no;
	//printf("%lld\n",1);
	long long int digit=n%10;
	if(digit==0)
	printf("2\n");
	else
	printf("1\n%lld",digit);
	return 0;
}