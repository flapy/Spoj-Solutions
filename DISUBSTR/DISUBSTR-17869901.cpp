#include<bits/stdc++.h>
using namespace std;
int lcp(string s1,string s2)
{
	int ans=0;
	int i=0;
	int j=0;
	int l1=s1.length();
	int l2=s2.length();
	for(i=0,j=0;i<l1 && j<l2;i++,j++)
	{
		if(s1[i]==s2[j])
		{
			ans++;
		}
		else
		break;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	string s;
	string str[100004];
	while(t--)
	{
		cin >> s;
		int l=s.length();
		string temp="";
		int j=0;
		for(int i=l-1;i>=0;i--)
		{
			temp+=s[i];
			string x=temp;
			str[j++]=string(x.rbegin(),x.rend());
		}
		sort(str,str+j);
		int ans=str[0].length();
		for(int i=1;i<j;i++)
		{
			ans+=-lcp(str[i],str[i-1])+str[i].length();
		}
		cout<<ans<<endl;
	}
	return 0;
}