#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000005], tong[1000005], b[10005], mmax;
long long s;

void dfs(int x, int cnt, int xx) {
	if (x > n) {
		if (cnt == m)
			mmax = max(mmax, xx);
		return;
	}
	dfs(x + 1, cnt + 1, xx &a[x]);
	dfs(x + 1, cnt, xx);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1, 0, INT_MAX);
	cout << mmax;
	return 0;
}
