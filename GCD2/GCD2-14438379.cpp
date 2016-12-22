#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
if(b==0)
    return a;
else
    return gcd(b,a%b);
}

int main(){
int t,a,i,l,b; char n[251];
cin>>t;
while(t--){

    b=0;
    scanf("%d%s",&a,n);
    l=strlen(n);
    if(a==0){
        printf("%s\n",n);
        continue;
    }
    for(i=0;i<l;i++)
    b=(b*10+(n[i]-'0'))%a;
    cout<<gcd(a,b)<<endl;
}
return 0;
}