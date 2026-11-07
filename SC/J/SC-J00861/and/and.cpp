#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int a[200005];
int ejz(int x)
{
	int ans = 0, i = 0;
	while (x != 0)
	{
		ans = ans + x % 2 * pow(10, i);
		i++;
		x /= 2;
	}
	return ans;
}
int And(int x, int y)
{
	string a, b;
	int lena = 0, lenb = 0;
	while (x != 0)
	{
		a[lena] = x % 10;
		x /= 10;
		lena++;
	}
	while (y != 0)
	{
		b[lenb] = y % 10;
		y /= 10;
		lenb++;
	}
	string c;
	int len = min(lena, lenb);
	for (int i = len; i >= 0; i--)
	{
		if (a[lena - 1] == b[lenb - 1])
		{
			c[i] = '1';
		}
		else
		{
			c[i] = '0';
		}
	}
	int ans = 0, id = 0, cnt = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		ans = ans + int(c[i] - '0') * pow(2, id);
		id++;
	}
	return ans;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, maxn = -1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (m == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (a[i] > maxn)
			{
				maxn = a[i];
			}
		}
		cout << maxn;
		return 0;
	}
	if (m == 2)
	{
		for (int i = 1; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				int k = And(ejz(a[i]), ejz(a[j]));
				if (k > maxn)
				{
					maxn = k;
				}
			}
		}
		cout << maxn;
		return 0;
	}
	if (m == n)
	{
		int sum;
		for (int i = 1; i <= n; i++)
		{
			sum += a[i];
		}
		cout << sum;
		return 0;
	}
	return 0;
}