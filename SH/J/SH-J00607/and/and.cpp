#include <iostream>
#include <algorithm>
using namespace std;

long long a[200002];
bool vis[200002];

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (long long i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	long long ans = 0;
	for (long long j = 30; j >= 0; --j) 
	{
		long long cnt = 0;
		for (long long i = 1; i <= n; ++i)
		{
			if (vis[i] == true)
			{
				continue;
			}
			cnt += ((a[i] >> j) & 1);
		}
		if (cnt >= m)
		{
			ans += (1 << j);
			for (long long i = 1; i <= n; ++i)
			{
				if (((a[i] >> j) & 1) == 0)
				{
					vis[i] = true;
				}
			}
		}
	}
	cout << ans;
	
	return 0;
} 
