#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int ans=0;
	int a,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		ans^=a;
	}
	cout<<ans<<endl;
	return 0;
}