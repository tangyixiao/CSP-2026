#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll n, m, a[500010], b[300010];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[a[i]] ++;
	}
	for (int i = 1; i <= m; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}