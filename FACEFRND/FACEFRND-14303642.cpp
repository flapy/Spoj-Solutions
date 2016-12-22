#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,id,id_fr,m;
	scanf("%d",&n);
	set<int> frndodfrnd ;
	set<int> frnd;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&id_fr);
		frnd.insert(id_fr);
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&id);
			frndodfrnd.insert(id);
		}
	}
	set<int> :: iterator i;
	for(i=frnd.begin();i!=frnd.end();i++)
	{
		if(frndodfrnd.find(*i)!=frndodfrnd.end())
		frndodfrnd.erase(*i);
	}
	printf("%d\n",frndodfrnd.size());
	return 0;
}