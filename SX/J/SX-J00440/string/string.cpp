#include <bits/stdc++.h>
#define PIC pair<int,char>
#define int long long
using namespace std;
const int N = 2e5+5;
int n, a[N], cnt, len, tmp = 1, x, ans, f[2 * N];
char c[N];

struct T {
	int s, l;
	char c;
} t[2 * N];

bool cmp(T z, T y) {
	return z.s < y.s;
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		t[++cnt] = {len + 1, a[i], c[i]};
		len += a[i];
	}
	len = 0;
	x = cnt;
	for (int i = n; i >= 2; i--) {
		len += a[i];
		while (!(t[tmp].s + t[tmp].l - 1 >= len + 1))
			tmp++;
		if (len == t[tmp].s + t[tmp].l - 1)
			continue;
		t[++cnt] = {t[tmp].s, len - t[tmp].s + 1, t[tmp].c};
		t[tmp].l -= (len - t[tmp].s + 1);
		t[tmp].s = len + 1;
		x++;
	}
	sort(t + 1, t + 1 + cnt, cmp);
	for (int i = 1; i <= x / 2; i++) {
		if (t[i].c != t[x - i + 1].c)
			ans += t[i].l;
	}
	cout << ans;
	return 0;
}
