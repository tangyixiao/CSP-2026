#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005];
int num;
long long maxum = 0;
//T3 < T2 ?
//33961573wwh
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i ++)
	{
		cin >> a[i];
	}
	for (int i = 30;i >= 0;i --)
	{
		num = 0;
		for (int j = 1;j <= n;j ++)
		{
			num += ((a[j] >> i) & 1);
		}
		if (num >= m)
		{
			maxum += (1 << i);
			for (int j = 1;j <= n;j ++)
			{
				if (((a[j] >> i) & 1) == 0)
				{
					a[j] = 0;
				}
			}
		}
	}
	cout << maxum;
	return 0;
} 