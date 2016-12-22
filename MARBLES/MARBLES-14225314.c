#include<stdio.h>
long long nCr(int n, int m){
    if(m>n-m) m=n-m;
    
    long long ans=1,i;
    
    for(i=0;i<m;i++) ans=ans*(n-i)/(i+1);
    
    return ans;
}
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,k;
		scanf("%lld %lld",&n,&k);
		if(n<k)
		printf("0\n");
		else if(n==k)
		printf("1\n");
		else
		{
			long long int remain=n-k;
			long long int pos=k+remain-1;
			printf("%lld\n",nCr(pos,k-1));
		}
	}
	return 0;
}