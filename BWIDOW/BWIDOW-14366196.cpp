#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,inr;
		int our[1004],pos=0,max;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&inr,&our[i]);
			if(i==0)
			max=inr;
			else
			{
				if(inr>max)
				{
					max=inr;
					pos=i;
				}
			}
		}
	//	printf("%d %d\n",pos,max);
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			if(our[i]>max && i!=pos)
			{
			//	printf("%d %d\n",our[i],max);
				flag=false;
				break;
			}
		}
		if(flag)
		{
			printf("%d\n",pos+1);
		}
		else
		printf("-1\n");
	}
	return 0;
}