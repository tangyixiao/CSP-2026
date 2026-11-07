#include <bits/stdc++.h>
using namespace std;

long long a[200005];
char c[200005];

struct node
{
	long long ans;
	char ch;
} m[200005],k[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,j = 1;
	cin >> n;
	long long sum = 0;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		if (c[i] != c[i-1] && i != 1)
		{
			j++;
		}
		m[j].ch = c[i];
		m[j].ans += a[i];
	}
	for (int i=1;i<=j;i++)
	{
		k[i+j-1].ans = m[i].ans;
		k[i+j-1].ch = m[i].ch;
	}
	for (int i=1;i<=j;i++)
	{
		if (m[i].ch != k[i].ch)
		{
			if (m[i].ans >= k[i].ans)
			{
				sum += k[i].ans;
				k[i].ch = m[i].ch;
				int x = m[i].ans - k[i].ans;
				k[i].ans = m[i].ans;
				int q = 1;
				while (x != 0)
				{
					q++;
					if (k[q].ch == m[i].ch)
					{
						if (k[q].ans >= x)
						{
							k[q].ans -= x;
							x = 0;
							break;
						}
						k[q].ans = 0;
						x -= k[q].ans;
					}
					else
					{
						if (k[q].ans >= x)
						{
							k[q].ans -= x;
							sum += x;
							x = 0;
							break;
						}
						sum += k[q].ans;
						k[q].ans = 0;
						x -= k[q].ans;
					}
				}
			}
			else
			{
				sum += m[i].ans;
				m[i].ch = k[i].ch;
				int x = k[i].ans - m[i].ans;
				m[i].ans = k[i].ans;
				int q = 1;
				while (x != 0)
				{
					q++;
					if (m[q].ch == k[i].ch)
					{
						if (m[q].ans >= x)
						{
							m[q].ans -= x;
							x = 0;
							break;
						}
						m[q].ans = 0;
						x -= m[q].ans;
					}
					else
					{
						if (m[q].ans >= x)
						{
							m[q].ans -= x;
							sum += x;
							x = 0;
							break;
						}
						sum += m[q].ans;
						m[q].ans = 0;
						x -= m[q].ans;
					}
				}
			}
		}
		cout << sum / 2;
	}
	return 0;
}