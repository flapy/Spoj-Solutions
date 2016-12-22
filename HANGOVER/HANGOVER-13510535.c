#include<stdio.h>
int main()
{
	long long int cnt,i;
	double ans,c;
	scanf("%lf",&c);
	while(c!=0)
	{
		cnt=0,i=2;
		ans=0;
		while(1)
		{
			ans=ans+1.0/i;
			cnt++;
			i++;
			//printf("%lf\n",ans);
			if(ans>=c)
			{
				break;
			}
		}
		printf("%lld card(s)\n",cnt);
		scanf("%lf",&c);
	}
	return 0;
}