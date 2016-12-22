#include<bits/stdc++.h>
using namespace std;
int block;
struct Node
{
	int r,l,i;
}*q;
int m;
int cnt=0;
int has[1000005]={0};
void add(int pos,int a[])
{
	int x=++has[a[pos]];
	if(x==1)
	{
		cnt++;
	}
}
void remove(int pos,int a[])
{
	int x=--has[a[pos]];
	if(x==0)
	{
		cnt--;
	}
}
bool cmp(Node x,Node y)
{
	if(x.l/block!=y.l/block)
	{
		return x.l/block<y.l/block;
	}
	return x.r<y.r;
}
int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int a[30004];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	q=(Node *)malloc(sizeof(Node)*(m+2));
	int i=0;
	int nq=m;
	int l,r;
	while(m--)
	{
		scanf("%d %d",&l,&r);
		l--;
		r--;
		q[i].l=l;
		q[i].r=r;
		q[i].i=i;
		i++;
	}
	block=sqrt(n);
	sort(q,q+nq,cmp);
	// for(int i=0;i<nq;i++)
	// {
	// 	cout<<q[i].l<<" "<<q[i].r<<" "<<q[i].i<<endl;
	// }
	int currentl,currentr;
	currentl=currentr=0;
	int ans[200004];
	for(int i=0;i<nq;i++)
	{
		int l=q[i].l;
		int r=q[i].r;
		while(currentl<l)
		{
			remove(currentl,a);
			currentl++;
		}
		while(currentl>l)
		{
			add(currentl-1,a);
			currentl--;
		}
		while(currentr<=r)
		{
			add(currentr,a);
			currentr++;
		}
		while(currentr>r+1)
		{
			remove(currentr-1,a);
			currentr--;
		}
		ans[q[i].i]=cnt;		
	}
	for(int i=0;i<nq;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}