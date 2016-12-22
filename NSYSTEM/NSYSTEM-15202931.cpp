#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)
  {
    string s,s1;
    cin>>s>>s1;
    int l=s.length();
    int l1=s1.length();
    map<char,int> ma;
    ma['m']=1000;ma['c']=100; ma['x']=10; ma['i']=1;
    int sum1,sum2;
    sum1=sum2=0;
    for(int i=0;i<l;i++)
    {
      if(s[i]<=57 && s[i]>=48)
      {
	i++;
	sum1+=(s[i-1]-48)*(ma[s[i]]);
      }
      else
      {
	sum1+=ma[s[i]];
      }
    }
    for(int i=0;i<l1;i++)
    {
      if(s1[i]<=57 && s1[i]>=48)
      {
	i++;
	sum2+=(s1[i-1]-48)*(ma[s1[i]]);
      }
      else
      {
	sum2+=ma[s1[i]];
      }
    }
    int sum=sum1+sum2;
    //cout<<"sum"<<" "<<sum<<endl;
    int cnt=0,dig=0,j=0,i,a[10];
    string ans;
    int store=sum;
    while(sum)
    {
      dig++;
      int r=sum%10;
      a[j++]=r;
      sum=sum/10;
    }
    map<int,char> m;
    m[1]='i',m[10]='x',m[100]='c',m[1000]='m';
    int k;
    for(i=dig,k=j-1;i>=1;i--,k--)
    {
      int x=pow(10,i-1);
      if(a[k]==1)
      {
		cout<<m[x];
      }
      else if(a[k]!=0)
      {
		cout<<a[k]<<m[x];
      }
    }
    cout<<endl;
  }
  return 0;
}