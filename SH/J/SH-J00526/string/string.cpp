#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[200005], b[200005], c[200005], d[200005], p[400005], ans;
char ch;
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> ch;
		b[i] = ch, c[n - i + 1] = a[i], d[n - i + 1] = ch;
	}
	p[++m] = 1;
	for (int i = 1; i <= n; i++) a[i] += a[i - 1], c[i] += c[i - 1], p[++m] = a[i] + 1, p[++m] = c[i] + 1;
	sort(p + 1, p + m + 1), m = unique(p + 1, p + m + 1) - p - 1;
	for (int i = 1; i <= m; i++) if (p[i] > a[n] / 2) {m = i - 1, p[i] = a[n] / 2 + 1; break;}
	for (int i = 1; i <= m; i++)
	{
		int x = lower_bound(a + 1, a + n + 1, p[i]) - a, y = lower_bound(c + 1, c + n + 1, p[i]) - c;
		if (b[x] != d[y]) ans += p[i + 1] - p[i];
	}
	cout << ans;
	return 0;
}
//freopen("string.in", "r", stdin);
//freopen("string.out", "w", stdout);
//freopen("string.in", "r", stdout);
//freopen("string.out", "w", stdin);
//freopen("string.in", "w", stdin);
//freopen("string.out", "r", stdout);
//freopen("string.in", "w", stdout);
//freopen("string.out", "r", stdin);
//freeopen("string.in", "r", stdin);
//froepen("string.out", "w", stdout);
//freopen("string.ans", "w", stdout);
//freopen("string1.in", "r", stdin);
//freopen("string1.out", "w", stdout);
//freopen('string.in', 'r', stdin);
//freopen('string.out', 'w', stdout);
//freopen("string.in", "r", stdin);
//freopen("travel.out", "w", stdout);
//freopen("travel.in", "r", stdin);
//freopen("string.out", "w", stdout);
//freopen("input.txt", "r", stdin);
//freopen("string.txt", "w", stdout);
//IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI
//IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI
//IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI IOI
//AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK
//AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK
//AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK AK
//AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO
//AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO
//AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO AFO
