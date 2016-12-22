#include <stdio.h>
#include <string.h>
 
void add(char *a, char *b)
{
    int i,d,c=0;
    int l1=strlen(a);
    int l2=strlen(b);
 
    for(i=l1;i<l2;i++)
        a[i]='0';
    for(i=l2;i<l1;i++)
        b[i]='0';
 
    for(i=0;i<l1||i<l2;i++)
    {
        d=(a[i]-'0')+(b[i]-'0')+c;
        c=d/10;
        d=d%10;
        a[i]='0'+d;
    }
    while(c)
    {
        a[i]='0'+(c%10);
        c/=10;
        i++;
    }
    a[i]='\0';
    b[l2]='\0';
 
    return ;
}
 
void subs(char *a, char*b)
{
    int i,d,c=0;
    int l1=strlen(a);
    int l2=strlen(b);
 
    for(i=l2;i<l1;i++)
        b[i]='0';
 
    for(i=0;i<l1;i++)
    {
        d=(a[i]-'0')-(b[i]-'0')-c;
        if(d<0)
        {
            d+=10;
            c=1;
        }
        else
            c=0;
        a[i]='0'+d;
    }
    b[l2]='\0';
 
    i=l1-1;
    while(i>0 && a[i]=='0')
        i--;
    a[i+1]='\0';
 
    return ;
}
 
void divide(char *a, int q)
{
    int i;
    int l=strlen(a);
    int c=0,d;
 
    for(i=l-1;i>=0;i--)
    {
        d=c*10+(a[i]-'0');
        c=d%q;
        a[i]='0'+(d/q);
    }
    i=l-1;
    while(i>0 && a[i]=='0')
        i--;
 
    a[i+1]='\0';
 
    return ;
}
 
void rev(char *a)
{
    int l=strlen(a);
    int i=0,j=l-1;
    char c;
 
    while(i<j)
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        i++;
        j--;
    }
 
    return ;
}
int main()
{
		char a[102], b[102];
 		while(scanf("%s %s",a,b)==2)
 		{
        rev(a);
        rev(b);
 
        add(a,b);
        divide(a,2);
 
        rev(a);
        printf("%s\n",a);
 
        rev(a);
        subs(a,b);
 
        rev(a);
        printf("%s\n",a);
    }
    return 0;
}