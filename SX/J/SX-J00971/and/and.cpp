#include <bits/stdc++.h>
using namespace std;
long long a[200010];
map<long long, int> v;
long long n, m, maxx = LLONG_MIN;

void dfs(int k, int id, long long s) {
	if (k == m + 1) {
		maxx = max(maxx, s);
		return;
	}
	for (int i = id + 1; i <= n; i++) {
		dfs(k + 1, i, k == 1 ? a[i] : (s &a[i]));
	}
}

int cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n <= 2000) { //1-10
		dfs(1, 0, 0);
		cout << maxx;
		return 0;
	}
	sort(a + 1, a + n + 1, cmp);
	long long qp = 0;
	for (int i = 1; i <= m; i++) {
		if (i == 1)
			qp = a[i];
		else
			qp &= a[i];
	}
	cout << qp;
	return 0;
}
