#include<bits/stdc++.h>
using namespace std;
int main()
{
	int att[20],def[20],a,d;
	scanf("%d %d",&a,&d);
	while(a && d)
	{
		for(int i=0;i<a;i++)
		{
			scanf("%d",&att[i]);
		}
		for(int i=0;i<d;i++)
		{
			scanf("%d",&def[i]);
		}
		sort(att,att+a);
		sort(def,def+d);
		if(att[0]<def[1])
		{
			printf("Y\n");
		}
		else
		printf("N\n");
			scanf("%d %d",&a,&d);

	}
	return 0;
}