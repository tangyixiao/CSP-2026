#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;
ll a[N], ans;
int l, n, r;
char c[N];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i ++)
		cin >> a[i] >> c[i], a[i] += a[i - 1];
	for (int i = 1; a[i] <= (a[n] + 1) / 2 || a[i] <= a[n] - a[i - 1]; i ++)
	{
		l = lower_bound(a + 1, a + n + 1, a[n] - a[i] + 1) - a, r = lower_bound(a + 1, a + n + 1, a[n] - a[i - 1]) - a;
		for (int j = l; j <= r; j ++)
			if (c[i] != c[j])
				ans += min(a[j], a[n] - a[i - 1]) - max(a[j - 1] + 1, a[n] - a[i] + 1) + 1;
	}
	cout << ans;
	return 0;
}
