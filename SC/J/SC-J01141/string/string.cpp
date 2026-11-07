#include <bits/stdc++.h>
using namespace std;

char c[1000000005];

int main()
{
	long long n,l,m = 1,h = 0,x = 0;
	char a;
	cin >> n;
	for (long long i = 0;i < n;i ++)
	{
		cin >> l >> a;
		h += l;
		for (long long j = 0;j < l;j ++)
		{
			c[m] = a;
			m ++;
		}
	}
	for (long long i = 1;i <= h;i ++)
	{
		if (!(c[i] == c[h + 1 - i]))
		{
			c[i] = c[h + 1 - i];
			x ++;
		}
	}
	cout << x;
	return 0;
}