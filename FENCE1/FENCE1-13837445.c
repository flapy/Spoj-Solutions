#include<stdio.h>
#define PI 3.141592654
int main()
{
	double l;
	scanf("%lf",&l);
	while(l!=0.0)
	{
		printf("%.2lf\n",(l*l)/(2*PI));
		scanf("%lf",&l);
	}
	return 0;
}