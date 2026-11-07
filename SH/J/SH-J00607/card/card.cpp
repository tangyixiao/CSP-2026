#include <iostream>
#include <algorithm>
using namespace std;

int a[500005], b[500005], ans[500005];

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	bool flag = true;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if (a[i] < a[i - 1])
		{
			flag = false;
		}
	}
	if (flag == true)
	{
		for (int i = 1; i <= n; ++i)
		{
			ans[a[i]] += 1;
		}
		for (int i = 1; i <= m; ++i)
		{
			ans[i] += ans[i - 1];
		}
	}
	else
	{
		for (int num = 1; num <= n; ++num)
		{
			int cnt = 0;
			for (int i = num; i <= n; ++i)
			{
				for (int j = 1; j <= cnt; ++j)
				{
					if (b[j] == a[i])
					{
						cnt = j - 1;
						break;
					}
				}
				cnt += 1;
				b[cnt] = a[i];
			}
		}
	}
	for (int i = 1; i <= m; ++i)
	{
		cout << ans[i] << " ";
	}
	
	return 0;
}
