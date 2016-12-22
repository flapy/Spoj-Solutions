#include bitsstdc++.h
using namespace std;
int bit[100004]={0};

void update(int l,int n,int val)
{	
	for (int i=l;i=n;i+=(i&(-i)))
	{
		bit[i] += val;
	}
}

int query(int n)
{
	int sum=0;
	for (int i = n ;i = 1;i-=(i&-i))
	{
		sum += bit[i];
	}
	return sum;
}

int main()
{
	ios_basesync_with_stdio(false);
	int t;
	cin  t;
	while (t--)
	{
		int n, u, l, r;
		cin  n  u;
		int val;
		while (u--)
		{
			cin  l  r  val;
			l++;
			r++;
			update(l,n,val);
			update(r+1,n,-val);
		}
		int q;
		cin  q;
		while (q--)
		{
			int index;
			cin  index;
			cout  query(index+1)  endl;
		}
		for(int i=0;i=100003;i++)
			bit[i]=0;
	}
	return 0;
}