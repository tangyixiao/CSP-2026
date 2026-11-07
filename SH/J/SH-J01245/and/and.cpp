#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	if(m == 1)
	{
		int maxx = 0;
		for(int i = 1; i <= n; i ++)
			maxx = max(maxx, a[i]);
		cout << maxx;
		return 0;
	}
	if(m == n)
	{
		int cnt = a[1];
		for(int i = 2; i <= n; i ++)
			cnt = cnt & a[i];
		cout << cnt;
		return 0;
	}
	if(m == 2)
	{
		int maxx = 0;
		for(int i = 1; i <= n; i ++)
		{
			for(int j = i+ 1; j <= n; j ++)
				maxx = max(maxx, a[i] & a[j]);
		}
		cout << maxx;
		return 0;
	}
	sort(a + 1, a + n + 1);
	int cnt = a[n];
	for(int i = n - 1; i >= n - m + 1; i --)
		cnt = cnt & a[i];
	cout << cnt;
	return 0;
}
