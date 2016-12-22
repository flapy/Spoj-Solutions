#include <bits/stdc++.h>
using namespace std;
int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int main()
{
	int t;
	t = readInt();
	while (t--)
	{
		int n, u, l, r;
		n = readInt();
		u = readInt();
		int val;
		int *arr = new int[n];

		while(u--)
		{
			l = readInt();
			r = readInt();
			val = readInt();
			arr[l] += val;
			arr[r+1] -= val;
		}

		for (int i = 1 ;i < n;i++)
		{
			arr[i] += arr[i-1];
		}

		int q;
		q = readInt();
		while (q--)
		{
			int index;
			index = readInt();
			printf("%d\n",arr[index]);
		}
	}
	return 0;
}