#include <bits/stdc++.h>
using namespace std;
int n, m, mx = -1;
int a[200005];

void mn() {
	int b;
	for (int i = 0; i < n; i++)
		b &= a[i];
	cout << b;
}

void t_a() {
	sort(a, a + n);
	cout << a[n - m];
}

void t_b() {
	int b = n - 1;
	for (int i = n - 1; i > n - m; i--)
		b &= i;
	cout << b;
}

void t_2() {
	int ans = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			ans = max(ans, a[i] & a[j]);
		}
	}
	cout << ans;
}

void t_n1() {
	int ans = -1;
	for (int i = 0; i < n; i++) {
		int q;
		if (i == 0)
			q = a[1];
		else
			q = a[0];
		for (int j = 0; j < n; j++) {
			if (j == i)
				continue;
			q &= a[j];
		}
		ans = max(ans, q);
	}
	cout << ans;
}
bool vis[200005];
int cnt = -1;

void dfs(int c, int ans) {
	if (c + 1 == m) {
		cnt = max(ans, cnt);
		return;
	}
	for (int i = c; i < n; i++) {
		if (vis[i])
			continue;
		vis[i] = 1;
		dfs(c + 1, ans &a[c]);
		vis[i] = 0;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	bool ta = 1, tb = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if ((a[i] & (a[i] + 1) ) != 0)
			ta = 0;
		if (a[i] != i)
			tb = 0;
		mx = max(mx, a[i]);
	}
	if (m == 1)
		cout << mx;
	else if (m == n)
		mn();
	else if (ta)
		t_a();
	else if (tb)
		t_b();
	else if (m == 2)
		t_2();
	else if (m == n - 1)
		t_n1();
	else {
		dfs(0, mx);
		cout << cnt;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
