#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<(n%2==0?n/2:n/2+1)<<endl;
	}
	return 0;
}