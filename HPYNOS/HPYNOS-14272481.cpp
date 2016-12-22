#include<stdio.h>
#include<iostream>
#include<cmath>
int main()
{
	bool check[1000]={false},ans=true;
	long long int n,new_n=0,cnt=0;
	scanf("%lld",&n);
	while(1)
	{
		new_n=0;
		while(n)
		{
			new_n=new_n+pow(n%10,2);
			n=n/10;
		}
		n=new_n;
		cnt++;
		if(n==1)
		break;
		if(check[n]==true)
		{
			printf("-1\n");
			ans=false;
			break;
		}
		check[n]=true;
	}
	if(ans)
	printf("%lld\n",cnt);
	return 0;
}