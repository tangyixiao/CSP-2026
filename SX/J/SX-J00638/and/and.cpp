#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+100;
int a[maxn], b[maxn];
bool p;

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0, max_ = 0, cnt = 0, c = 0, m = 0, ans = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		max_ = max(max_, a[i]);
	}
	for (int i = 2; i <= max_; i  = i * 2) {
		cnt++;
	}
	for (int i = cnt; i >= 0; i--) {
		for (int j = 1; j <= n; j++) {
			if ((a[j] >> i) & 1) {
				c++;
				b[c] = a[j];
			}
		}
		if (c >= m) {
			p = 1;
			break;
		}
		c = 0;
	}
	if (!p)
		ans = 0;
	else {
		sort(b + 1, b + m + 1, cmp);
		ans = b[1];
		for (int i = 1; i <= m; i++) {
			ans = ans &b[i];
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
