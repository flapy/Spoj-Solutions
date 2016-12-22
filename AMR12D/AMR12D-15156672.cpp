#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		set<string> se;
		int l=s.length();
		for(int i=0;i<l;i++)
		{
			string s1="";
			for(int j=i;j<l;j++)
			{
				s1+=s[j];
			//	cout<<s1<<endl;
				se.insert(s1);
			}
		}
		set<string> ::iterator itr;
		bool flag=true;
		//	cout<<"INSERTION DODE"<<endl<<endl;
		for(itr=se.begin();itr!=se.end();itr++)
		{
			string s=*itr;
			string k="";
			for(int i=s.length()-1;i>=0;i--)
			{
			  k+=s[i];
			}
		//	cout<<k<<endl;
			if(se.find(k)==se.end())
			{
				flag=false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(flag)
		cout<<"YES"<<endl;
	}
	return 0;
}