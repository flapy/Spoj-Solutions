#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,d,w,cnt=0;
		scanf("%d %d %d",&n,&m,&d);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&w);
			w=w-d;
			while(w>0)
			{
				w=w-d;
				cnt++;
			}
		}
		if(cnt>=m)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}