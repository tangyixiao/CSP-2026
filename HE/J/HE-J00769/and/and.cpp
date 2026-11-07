#include <iostream>
#include <algorithm>

#define int long long

int n, m;
int a[200005];

signed main()
{
	std::ios::sync_with_stdio(false);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> a[i];
	}
	std::sort(a + 1, a + n + 1, std::greater<int>());
	int ans = a[1];
	std::cout << ans << "\n";
	for (int i = 2, cnt = 1; cnt < m && i <= n; i++)
	{
		if ((ans & a[i]) != 0)
		{
			ans &= a[i];
			cnt++;
		}
		else if (i == n)
		{
			ans &= a[i];
			cnt++;
		}
	}
	std::cout << ans;
	
	return 0;
}
