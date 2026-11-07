#include<bits/stdc++.h>
using namespace std;
int n, m, a[500005], z[300005], ans[300005];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		ans[a[i]]++;
		z[a[i]] = i;
	}
	for(int i = 1; i <= n; ++i)
	{
		if(z[a[i]] == i)
		{
			ans[a[i + 1]] += ans[a[i]];
		}
	}
	for(int i = 1; i <= m; ++i)
	{
		cout << ans[i] << " ";
	}
	return 0;
} 
