#include <bits/stdc++.h>
using namespace std;
int c[500010], num[300010]; 
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		cin >> c[i];
	} 
	for (int i = 1;i <= n; i ++)
	{
		int cur = i;
		while (cur != n)
		{
			for (int j = n; j >= cur;j --)
			{
				if (c[j] == c[cur])
				{
					cur = j;
					num[c[j]] ++;
					break;
				}
			}
			cur ++;
		}
		num[c[n]] ++;
	}
	for (int i = 1; i <= m; i ++)
	{
		cout << num[i] << " ";
	}
	return 0;
 } 
