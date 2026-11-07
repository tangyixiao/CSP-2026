#include <bits/stdc++.h>
using namespace std;
int n, m, x[100005], j[100005], b[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i];
	}
	int l = 1;
	while (n >= l)
	{
		for (int i = l; i <= n; i++)
		{
			b[x[i]]++;
			j[i] = x[i];
			if (b[x[i]] > l)
			{
				int p = 0;
				for (int k = 1; k <= i+1; k++)
				{
					if (j[k] == x[i])
					{
						p = k;
						break;
					}
					
				}
				for (int o = p; o < i; o++)
				{
					b[x[o]]--;
					j[o] = 0;
				}
			}
		}
		l++;
	}
	for (int i = 1; i <= m; i++)
	{
		cout << b[i] << " ";
	}
}
