#include<stdio.h>
int main()
{
	int a,b,c,t,rev=0,n,n1,n2,rev1=0,add,rev2=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n1,&n2);
		rev=0;
		rev1=0;
		rev2=0;
		add=0;
		while(n1>0)
		{
			a=n1%10;
			n1=n1/10;
			rev=rev*10+a;
		}
		while(n2>0)
		{
			b=n2%10;
			n2=n2/10;
			rev1=rev1*10+b;
		}
		add=rev+rev1;
		while(add>0)
		{
			c=add%10;
			add=add/10;
			rev2=rev2*10+c;
		}
		printf("%d\n",rev2);
	}
	return 0;
}