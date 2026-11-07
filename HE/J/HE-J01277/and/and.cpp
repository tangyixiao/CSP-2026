#include <iostream>
#include <string>
using namespace std;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 5];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (m == 1)
	{
		int max = -1;
		for (int i = 1; i <= n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		cout << max;
		return 0;
	}
	if (m == n)
	{
		int ans = a[1];
		for (int i = 2; i <= n; i++)
		{
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	int min = 1000000000;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << min;
	return 0;
}
