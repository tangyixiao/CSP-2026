#include<bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans, cnt;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for(int i = 29; i >= 0; --i)
	{
		int j = 1 << i;
		sort(a + 1, a + n + 1, cmp);
		cnt = 0;
		for(int i = 1; i <= n; ++i)
		{
			if(a[i] & j)
			{
				++cnt;
				a[i] ^= j;
			}
			else
			{
				break;
			}
		}
		if(cnt >= m)
		{
			n = cnt;
			ans += j;
		}
	}
	cout << ans;
	return 0;
} 
