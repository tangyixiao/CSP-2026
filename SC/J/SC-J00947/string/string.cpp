#include <bits/stdc++.h>

using namespace std;

int n;
int a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	long long res = 0;
	for (int l = 1, r = n, lp = 0, rp = 0; l < r; ) {
		if (c[l] != c[r])
			res += min(a[l] - lp, a[r] - rp);
		if (a[l] - lp < a[r] - rp)
			rp += a[l++] - lp, lp = 0;
		else if (a[l] - lp > a[r] - rp)
			lp += a[r--] - rp, rp = 0;
		else
			l++, r--, lp = rp = 0;
	}
	cout << res << '\n';
	return 0;
}
