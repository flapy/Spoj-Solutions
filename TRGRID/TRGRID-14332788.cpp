#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(a==1)
		{
			printf("R\n");
		}
		else if(b==1)
		{
			printf("D\n");
		}
		else if(a==b && a%2==0)
		{
			printf("L\n");
		}
		else if(a==b && a%2!=0)
		{
			printf("R\n");
		}
		else if(a>b)
		{
			int bet=b-2;
			if(bet%2==0)
			printf("U\n");
			else
			printf("D\n");
		}
		else
		{
			int bet=a-2;
			if(bet%2==0)
			printf("L\n");
			else
			printf("R\n");
		}
	}
	return 0;
}