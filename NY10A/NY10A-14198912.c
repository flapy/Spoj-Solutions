#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		char a[50];
		scanf("%s",a);
		long long int i=0;
		long long int s[10];
		for(i=0;i<10;i++)
		s[i]=0;
		s[0]=n;
		for(i=0;i<40;i++)
		{
			if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='T')
			s[1]++;
		}
		for(i=0;i<40;i++)
		{
			if(a[i]=='T' && a[i+1]=='T' && a[i+2]=='H')
			s[2]++;
		}
		for(i=0;i<40;i++)
		{
			if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='T')
			s[3]++;
		}
		for(i=0;i<40;i++)
		{
			if(a[i]=='T' && a[i+1]=='H' && a[i+2]=='H')
			s[4]++;
		}
		for(i=0;i<40;i++)
		{
			if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='T')
			s[5]++;
		}
		for(i=0;i<40;i++)
		{
			if(a[i]=='H' && a[i+1]=='T' && a[i+2]=='H')
			s[6]++;
		}
		for(i=0;i<40;i++)
		{
			if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='T')
			s[7]++;
		}
		for(i=0;i<40;i++)
		{
			if(a[i]=='H' && a[i+1]=='H' && a[i+2]=='H')
			s[8]++;
		}
		for(i=0;i<9;i++)
		printf("%lld ",s[i]);
		printf("\n");
	}
	return 0;
}