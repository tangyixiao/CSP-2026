#include <bits/stdc++.h>
using namespace std;

long long a[200005];
char c[200005];
long long s;
int n;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i], s += a[i];
	s /= 2;
	long long p = 0;
	long long ans = 0;
	int now = n;
	for (int i = 1; i <= n; i++)
	{
		if (p + a[i] > s)
			a[i] = s - p;
		while (a[i] >= a[now])
			if (c[i] == c[now])
				a[i] -= a[now], a[now] = 0, now--;
			else
				ans += a[now], a[i] -= a[now], a[now] = 0, now--;
		if (c[now] != c[i])
			ans += a[i];
		a[now] -= a[i];
	}
	cout << ans;
	
	return 0;
}