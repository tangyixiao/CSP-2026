#include <bits/stdc++.h>
using namespace std;

int flag = 1, n, m, a[500010], f[300010], npw[300010], q[300010], p[300010];

void pts8()
{
	int b[3] = {0, 0, 0};
	for (int i = 1; i <= n; i++)
	{
		if (a[n] == a[i])
			b[i]++;
		else
			b[1]++, b[2]++;
	}
	cout << b[1] << ' ' << b[2] << '\n';
}

void pts16()
{
	for (int i = 1; i <= m; i++)
	{
		cout << f[i] << ' '; 
	}
	cout << '\n';
}

void dfs(int x)
{
	memset(npw, 0, sizeof npw);
	memset(q, 0, sizeof q);
	int pos = x;
	for (int i = x; i <= n; i++)
	{
		
		if (i != q[a[i]] && q[a[i]])
		{
			pos = q[a[i]];
		}
		npw[pos] = a[i];
		q[a[i]] = pos;
		pos++;
	}
	for (int i = x; i < pos; i++)
	{
		p[npw[i]]++;
	}
}

void pts12()
{
	for (int i = 1; i <= n; i++)
		dfs(i);
	for (int i = 1; i <= m; i++)
		cout << p[i] << ' ';
	cout << '\n';
}

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		f[a[i]] = i;
		if (a[i] < a[i - 1])
			flag = 0;
	}
	if (flag)
	{
		pts16();
	}
	else if (m == 2)
	{
		pts8();
	}
	else
	{
		pts12();
	}
	return 0;
}
