#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[300005], b[300005];
int main()
{
	cin >> n >> m;
	freopen("card.in", "r", stdin);
	freopen("card.out","w",stdout);
	int x;
	int cnt = 0;
	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> x;
			bool c = true;
			for (int j = 1; j < i; j++)
			{
				if(!c)
				{
					a[j] = 0;
				}
				if (a[j] == x)
				{
					c = false;
					a[j] = x;
					cnt = j;
				}	
			}
			if(c)
			{
				a[++cnt] = x;
			}
		}
		for (int i = 1; i <= cnt; i++)
		{
			b[a[i]]++;
		}
	}
	return 0;
}