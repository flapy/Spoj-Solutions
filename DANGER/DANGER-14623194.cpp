#include<bits/stdc++.h>
using namespace std;
int v[66000003];
int main()
{
	char s[10];
	scanf("%s",s);
	while(!(s[0]=='0' && s[1]=='0'))
	{
		int ans=(s[0]-48)*10+(s[1]-48);
		int zero=s[3]-48;
		string no_zero="";
		while(zero>0)
		{
			no_zero=no_zero+"0";
			zero--;
		}
		string s1=to_string(ans)+no_zero;
		int n=stoi(s1);
		int i=1;
		int net=1;
		int prev;
		while(net<=n)
		{
			prev=net;
			net=pow(2,i);
			i++;
		}
		n=n-prev+1;
		cout<<1+(n-1)*2<<"\n";
		scanf("%s",s);
	}
	return 0;
}