#include<bits/stdc++.h>
using namespace std;
    #define inchar getchar_unlocked
            #define pc putchar_unlocked
        inline int inp() {
    	int n, ch;
    	while ((ch = inchar()) < '0');
    	n = (ch - '0');
    	while ((ch = inchar()) >= '0')
    		n = (n << 3) + (n << 1) + (ch - '0');
    	return n;
    }
     inline void println(int n)
    {
    	char ch[10];
    	int ind=0;
    	if(n<0)
    	{
    		pc('-');
    		n *= -1;
    	}
    	if(n == 0)
    	{
    		pc('0');
    	}
    	while(n > 0)
    	{
    		ch[ind] = n%10 + '0';
    		n /= 10;
    		ind++;
    	}
    	while(ind--) pc(ch[ind]);
    	pc('\n');
    }
    int primeFactors(int n,int arr[])
{
	int q=0;
	int cnt=0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
    	if(cnt==0)
    	{
    		arr[q++]=2;
    		cnt++;
    	}
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
    	cnt=0;
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
        	if(cnt==0)
    		{
    			arr[q++]=i;
    			cnt++;
    		}
            //printf("%d ", i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        arr[q++]=n;
        return q;
}
int main()
{
	int t,n;
	t=inp();
	while(t--)
	{
		int cnt=0;
		int arr[100005];
		n=inp();
		int size=primeFactors(n,arr);
		double ans=(double)n;
		for(int i=0;i<size;i++)
		{
			ans=ans*(1-1.0/arr[i]);
		}
		printf("%.0lf\n",ans);
	}
	return 0;
}