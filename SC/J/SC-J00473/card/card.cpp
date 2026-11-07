#include <bits/stdc++.h>
using namespace std;
long long n, m, num1, num2; 
long long a[100000005], b[100000005];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1)
	{
		sort(a + 1, a + n + 1);
		cout << a[n];
		return 0;
	}
	if (m == 2)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (a[j] == a[i]) continue;
				else
				{
					num1++;
					b[num1] = (a[i] % a[j]);
				}
			}
		}
		sort (b + 1, b + num1 + 1);
		cout << b[num1];
		return 0;
	}
	if (m == 3)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (a[j] == a[i]) continue;
				else
				{
					for (int k = 1; k <= n; k++)
					{
						if (a[k] == a[j] || a[k] == a[i]) continue;
						else
						{
							num2++;
						    b[num2] = (a[i] & a[j] & a[k]);
						}
					}
				}
			}
		}
		sort (b + 1, b + num2 + 1);
		cout << b[num2];
		return 0;
	}
	return 0;
}