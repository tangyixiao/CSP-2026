#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n, m;
int a[N];
int32_t main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++)
	{
		int ans = 0;
		for (int j = 1; j <= n; j++)
		{
			if (a[j] == i)
				ans++;
		}
		int s = 0;
		for (int j = 1; j <= ans; j++)
			s += j;
		cout << s << ' ';
	}
	return 0;
}
