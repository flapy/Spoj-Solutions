#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		int a[1005],i;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		int continu[1005],j=0,k=0,l,street[1005],tobe=1;
		for(i=0;i<n;i++)
		{
			if(tobe==a[i])
			{
				continu[j++]=a[i];
				tobe++;
			}
			else
			{
				int var=0;
				for(l=k-1;l>=0;l--)
				{
					if(tobe!=street[l])
					break;
					else
					{	
						continu[j++]=street[l];
						k--;
						tobe++;
						var=1;
					}
				}
				if(!var)
				street[k++]=a[i];
				else
				i--;
			}
		}
		for(i=k-1;i>=0;i--)
		{
			continu[j++]=street[i];
		}
	/*	for(i=0;i<j;i++)
		printf("%d ",continu[i]);*/
		//printf("%lld\n",j);
		int flag=1;
		for(i=0;i<j;i++)
		{
			if(continu[i]!=i+1)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		printf("yes\n");
		else
		printf("no\n");
		scanf("%lld",&n);
	}
	return 0;
}