#include <bits/stdc++.h>
#define int long long
using namespace std;
int t[200005];
bool vis[200005];
int n, m;

int andd(int x, int y) {
	string a;
	string b;
	while (x) {
		a += (x % 2) + '0';
		x /= 2;
	}
	while (y) {
		b += (y % 2) + '0';
		y /= 2;
	}
	int len1 = a.length(), len2 = b.length();
	int sum = 0, vis = 1;
	a += " ";
	b += " ";
	for (int i = 0; i < min(len1, len2); i++) {
		if (a[i] == b[i] && a[i] == '1') {
			sum += vis;
		}
		vis *= 2;
	}
	return sum;
}
int maxnn = -1;

void dfs(int step, int now) {
	if (step == m ) {
		maxnn = max(maxnn, now);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			vis[i] = true;
			dfs(step + 1, andd(now, t[i]));
		}
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
	}
	if (m == 1) {
		sort(t + 1, t + n + 1);
		cout << t[n];
	}
	if (m == n) {
		int sum = t[1];
		for (int i = 2; i <= n; i++) {
			sum = andd(sum, t[i]);
		}
		cout << sum << endl;
	}
	if (m == 2) {
		int maxn = -1;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxn = max(maxn, andd(t[i], t[j]));
			}
		}
		cout << maxn << endl;
	}
	if (n <= 20) {
		for (int i = 1; i <= n; i++) {
			memset(vis, 0, sizeof(vis));
			vis[i] = true;
			dfs(1, t[i]);
		}
		cout << maxnn;
	}
	return 0;
}
