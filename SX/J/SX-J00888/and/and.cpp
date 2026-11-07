#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m;
int a[N];
int f[N];
bool st[N];
int ans;

void dfs(int step) {
	if (step > m) {
		int ans1 = a[f[1]];
		for (int i = 1; i <= m; i++) {
			ans1 = ans1 &a[f[i]];
		}
		ans = max(ans, ans1);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (st[i] == 1)
			continue;
		st[i] = 1;
		f[step] = i;
		dfs(step + 1);
		st[i] = 0;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(a[i], ans);
		}
	} else if (m == 2) {
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (i != j)
					ans = max(a[i] & a[j], ans);
	} else if (m == n) {
		ans = a[1];
		for (int i = 1; i <= n; i++)
			ans = a[i] & ans;
	} else
		dfs(0);
	cout << ans;
	return 0;
}
