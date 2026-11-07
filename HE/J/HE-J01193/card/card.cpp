#include <bits/stdc++.h>
using namespace std;
const int M = 3e5 + 10, N = 5e5 + 10;
int a[N], ans[M], m, n;
stack <int> s;
bool c[M];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	for (int i = 1; i <= n; i ++)
	{
		memset(c, 0, sizeof c);
		for (int j = i; j <= n; j ++)
		{
			if (c[a[j]])
				while (s.top() != a[j])
					c[s.top()] = 0, s.pop();
			else
				c[a[j]] = 1, s.push(a[j]);
		}
		for (int j = 1; j <= m; j ++)
			ans[j] += c[j];
	}
	for (int i = 1; i <= m; i ++)
		cout << ans[i] << ' ';
	return 0;
}
