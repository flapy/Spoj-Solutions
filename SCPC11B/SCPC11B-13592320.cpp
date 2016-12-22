#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[100005],i,j;
	while(1)
	{
		
		j=0;
		scanf("%d",&n);
		if(n==0)
		break;
		while(n--)
		{
			scanf("%d",&a[j]);
			j++;
		}
		sort(a,a+j);
		int flag=1,p=0;
		for(i=0;i<j-1;i++)
		{
			if(a[i+1]-a[i]>200)
			{
				flag=0;
				break;
			}
		}
		if(!flag)
		printf("IMPOSSIBLE\n");
		else 
		{
			//printf("%d",a[j-1]);
			int x=2*(1422-a[j-1]);
			if(x>200)
			printf("IMPOSSIBLE\n");
			else
			{
				p=1;
			}
		}
		if(p)
		printf("POSSIBLE\n");
	}
			return 0;

}