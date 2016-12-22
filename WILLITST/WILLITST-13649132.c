#include<stdio.h>
#include<math.h>
int main()
{
	double i=0,flag=0;
	double a,ans;
	scanf("%lf",&a);
	while(1)
	{
		i++;
		double x=pow(2,i);
		ans=a/x;
		if(ans==1.0)
		{
			printf("TAK\n");
			flag=1.0;
			break;
		}
		if(x>a)
		break;
	}
	if(flag==0.0)
	printf("NIE\n");
	return 0;
}