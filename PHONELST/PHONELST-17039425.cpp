#include <bits/stdc++.h>
using namespace std;
struct TrieNode
{
	struct TrieNode *m[10];
	//map<char,TrieNode*> m;
	bool end;
};
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		TrieNode *root=new TrieNode();
		bool flag=true;
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		sort(s,s+n);
		for(int i=0;i<n;i++)
		{
			TrieNode *temp=root;
			int l=s[i].length();
			//cout<<s[i]<<endl;
			if(flag)
			{
				for(int j=0;j<l;j++)
				{
					if(temp->end)
					{
						flag=false;
						break;
					}
					if(temp->m[s[i][j]-48])
					{
						temp=temp->m[s[i][j]-48];
					}
					else
					{
						temp=temp->m[s[i][j]-48]=new TrieNode();
					}
				}
				temp->end=true;
			}
			else
			break;
		}
		delete root;
		if(flag)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;
}