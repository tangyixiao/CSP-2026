#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;

int n, m, cnt, tmp, ans, a[N], b[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	cnt = n;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int k = 29; ~k; k--) {
		tmp = 0;
		for (int i = 1; i <= cnt; i++)
			if ((a[i] >> k) & 1)
				b[++tmp] = a[i];
		if (tmp < m)
			continue;
		for (int i = 1; i <= tmp; i++)
			a[i] = b[i];
		cnt = tmp;
		ans += 1 << k;
	}
	cout << ans;
	return 0;
}
