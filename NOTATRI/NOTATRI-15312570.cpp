#include <bits/stdc++.h>
using namespace std;
int m[4000004];
     #define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
int main() {
	// your code goes here
	int n;
	n=read_int();
	while(n)
	{
		int a[2004];
		for(int i=0;i<n;i++)
			a[i]=read_int();
		int k=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int ans=a[i]+a[j];
				m[k++]=ans;
			}
		}
		sort(a,a+n);
		int cnt=0;
		for(int i=0;i<k;i++)
		{
			int sum=m[i];
			int l=upper_bound(a,a+n,sum)-a;
			//cout<<l<<" "<<n;
			cnt+=n-l;
		}
		printf("%d\n",cnt);
			n=read_int();

	}
	return 0;
}