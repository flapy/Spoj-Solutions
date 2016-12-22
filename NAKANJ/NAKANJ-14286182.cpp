#include<stdio.h>
#include<queue>
#include<limits.h>
#include<bits/stdc++.h>
#include <bits/stl_queue.h>
using namespace std;
struct box
{
	int m,n,d;
};
int bfs(struct box source,struct box desti)
{
	//printf("%d %d\n",b.m,b.n);
	queue< struct box > q;
	q.push(source);
	struct box x;
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		if(x.m<1 || x.m>8 || x.n<1 || x.n>8)
		continue;
		if(x.m==desti.m && x.n==desti.n)
		{
			return x.d;
		}
		struct box possible;
		//possible=(struct box *)malloc(sizeof(struct box)*9);
	/*1*/possible.m=x.m+2;
		possible.n=x.n+1;
		possible.d=x.d+1;
		q.push(possible);
		possible.m=x.m+2;//2
		possible.n=x.n-1;
		possible.d=x.d+1;
		q.push(possible);
		possible.m=x.m+1;//3
		possible.n=x.n+2;
		possible.d=x.d+1;
		q.push(possible);
		possible.m=x.m-1;//4
		possible.n=x.n+2;
		possible.d=x.d+1;
		q.push(possible);
		possible.m=x.m-2;//5
		possible.n=x.n+1;
		possible.d=x.d+1;
		q.push(possible);
		possible.m=x.m-2;//6
		possible.n=x.n-1;
		possible.d=x.d+1;
		q.push(possible);
		possible.m=x.m-1;//7
		possible.n=x.n-2;
		possible.d=x.d+1;
		q.push(possible);
		possible.m=x.m+1;//8
		possible.n=x.n-2;
		possible.d=x.d+1;
		q.push(possible);
	}
	
//	while()
}
int main()
{
	int t,i;
	scanf("%d",&t);	
	while(t--)
	{
		int a[164][164],i,j;
		char source[4],desti[4];
		scanf("%s",source);
		scanf("%s",desti);
		int m=source[1]-48;
		int n=source[0]-96;
		//printf("%d %d\n",m,n);
		struct box b,b1;
		b.m=m;
		b.n=n;
		b.d=0;
		int m1=desti[1]-48;
		int n1=desti[0]-96;
		b1.m=m1;
		b1.n=n1;
		b1.d=INT_MAX;
		printf("%d\n",bfs(b,b1));
	}
	return 0;
}