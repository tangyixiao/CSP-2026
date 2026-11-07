#include <bits/stdc++.h>
using namespace std;
int n, m, a[5000], ans[5000];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		int idx = 0, b[5000] = {0}, qwer[5000];
		for(int j = i; j <= n; j++)
		{
			if(qwer[a[j]] == 0)
				qwer[a[j]] = ++idx, b[idx] = a[j];
			else
			{	
				for(int k = qwer[a[j]]; k <= idx; k++)
				{
					qwer[b[k]] = 0;
				}
				qwer[a[j]] = ++idx, b[idx] = a[j];
			}
		}
		for(int j = 1; j <= m; j++)
		{
			if(qwer[j])
				ans[j]++;
		}
	}
	for(int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}