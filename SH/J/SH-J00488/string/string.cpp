#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
constexpr int MAXM = 2e5 + 5;
constexpr int MAXN = 1e6 + 1;

int m, n = 0, a[MAXM], gcd, ans = 0;
char c[MAXM];
string s(" ");

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.in", "w", stdout);

	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> a[i] >> c[i];
		if (i == 1) gcd = a[i];
		else gcd = __gcd(gcd, a[i]);
	}
	for (int i = 1; i <= m; i++)
	{
		s.append(a[i] / gcd, c[i]);
		n += a[i] / gcd;
	}
	for (int i = 1; i <= (n + 1LL) / 2LL; i++)
		if (s[i] != s[n - i + 1])
		{
			ans++;
			s[i] = s[n - i + 1];
		}
	cout << ans * gcd << "\n";
	return 0;
}
