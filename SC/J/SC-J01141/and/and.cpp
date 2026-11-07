#include <bits/stdc++.h>
using namespace std;

long long a[200005],b[31451926];
int n,m;
long long x = 0,t = 0;

int main()
{
	cin >> n >> m;
	for (int i = 1;i <= n;i ++)
		cin >> a[i];
	for (int i = 1;i <= n;i ++)
	{
		for (int j = i + 1;j <= n;j ++)
		{
			b[x] = (a[i] & a[j]);
			x ++;
		}
	}
	for (int i = 0;i < x;i ++)
		if (b[i] > t) t = b[i];
	cout << t;
	return 0;
}