#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector <int> a(n,0), b(m+1,0), c(m+1, 0);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int j = 0; j < n; j++) 
	{
		for (int i = 0; i < n; i++)
		{
			if (b[a[i]] == 0) b[a[i]]++;
			else
			{
				b.resize(m+1, 0);
				b[a[i]]++;
			}
		}
		for (int i = 1; i < m+1; i++)
		{
			c[i] += b[i];
		}
	}
	for (int i = 1; i <= m; i++)
		cout << c[i] << " ";
	return 0;
}
