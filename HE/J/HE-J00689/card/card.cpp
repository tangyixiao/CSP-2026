#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m, a[10000];
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (a[i] == a[j])
			{
				a.substr(a + j, a + n + 1);
			}
		}
	}
	return 0;
}
