#include <bits/stdc++.h>
using namespace std;
#include <cstdio>
#include <iostream>
using std::string;

static struct IO {
	char tmp[1 << 10];

	// fast input routines
	char cur;

//#define nextChar() (cur = getc_unlocked(stdin))
//#define peekChar() (cur)
	inline char nextChar() { return cur = getc_unlocked(stdin); }
	inline char peekChar() { return cur; }

	inline operator bool() { return peekChar(); }
	inline static bool isBlank(char c) { return (c < '-' && c); }
	inline bool skipBlanks() { while (isBlank(nextChar())); return peekChar() != 0; }

	inline IO& operator >> (char & c) { c = nextChar(); return *this; }

	inline IO& operator >> (char * buf) {
		if (skipBlanks()) {
			if (peekChar()) {
				*(buf++) = peekChar();
				while (!isBlank(nextChar())) *(buf++) = peekChar();
			} *(buf++) = 0; } return *this; }

	inline IO& operator >> (string & s) {
		if (skipBlanks()) {	s.clear(); s += peekChar();
			while (!isBlank(nextChar())) s += peekChar(); }
		return *this; }

	inline IO& operator >> (double & d) { if ((*this) >> tmp) sscanf(tmp, "%lf", &d); return *this;	}

#define defineInFor(intType) \
	inline IO& operator >>(intType & n) { \
		if (skipBlanks()) { \
			int sign = +1; \
			if (peekChar() == '-') { \
				sign = -1; \
				n = nextChar() - '0'; \
			} else \
				n = peekChar() - '0'; \
			while (!isBlank(nextChar())) { \
				n += n + (n << 3) + peekChar() - 48; \
			} \
			n *= sign; \
		} \
		return *this; \
	}

defineInFor(int)
defineInFor(unsigned int)
defineInFor(long long)

	// fast output routines

//#define putChar(c) putc_unlocked((c), stdout)
	inline void putChar(char c) { putc_unlocked(c, stdout); }
	inline IO& operator << (char c) { putChar(c); return *this; }
	inline IO& operator << (const char * s) { while (*s) putChar(*s++); return *this; }

	inline IO& operator << (const string & s) { for (int i = 0; i < (int)s.size(); ++i) putChar(s[i]); return *this; }

	char * toString(double d) { sprintf(tmp, "%lf%c", d, '\0'); return tmp; }
	inline IO& operator << (double d) { return (*this) << toString(d); }


#define defineOutFor(intType) \
	inline char * toString(intType n) { \
		char * p = (tmp + 30); \
		if (n) { \
			bool isNeg = 0; \
			if (n < 0) isNeg = 1, n = -n; \
			while (n) \
				*--p = (n % 10) + '0', n /= 10; \
			if (isNeg) *--p = '-'; \
		} else *--p = '0'; \
		return p; \
	} \
	inline IO& operator << (intType n) { return (*this) << toString(n); }

defineOutFor(int)
defineOutFor(long long)

#define endl ('\n')
#define cout __io__
#define cin __io__
} __io__;

int main() {
	// your code goes here
	int t,n,p,a,b;
	cin>>t;
	while(t--)
	{
		list<pair<int,int> > l[10005];
		map<string,int> ma;
		cin>>n;
		string s,n1,n2;
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			ma[s]=i;
			cin>>p;
			for(int j=0;j<p;j++)
			{
				cin>>a>>b;
				l[i].push_back(make_pair(a,b));
			}
		}
			int k;
			cin>>k;
			while(k--)
			{
				int d[10004];
				for(int k=1;k<=n;k++)
				{
					d[k]=-1;
				}
				cin>>n1>>n2;
				d[ma[n1]]=0;
				//cout<<ma[n1]<<endl;
				set<pair<int,int> > se;
				se.insert(make_pair(0,ma[n1]));
				while(!se.empty())
				{
					pair<int,int> p1=*se.begin();
					int u=p1.second;
					//cout<<u;
					se.erase(se.begin());
					list<pair<int,int> > ::iterator itr;
					for(itr=l[u].begin();itr!=l[u].end();itr++)
					{
					//	cout<<"hello";
						int v=itr->first;
						int w=itr->second;
						if(d[v]==-1)
						{
							d[v]=d[u]+w;
							se.insert(make_pair(d[u]+w,v));
						}
						else
						{
							if(d[u]+w<d[v])
							{
								se.erase(make_pair(d[v],v));
								d[v]=d[u]+w;
								se.insert(make_pair(d[u]+w,v));
							}
						}
					}
				}
				cout<<d[ma[n2]]<<endl;
			}
		}
	return 0;
}