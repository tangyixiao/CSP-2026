#include <iostream>
#include <string>
using namespace std;
const int N = 2e5 + 5;
int a[N];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n, ans = -1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			ans = max(ans, a[i] & a[j]);
		}
	}
	cout << ans;
	return 0;
}