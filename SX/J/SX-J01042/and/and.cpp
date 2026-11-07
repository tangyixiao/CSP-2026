#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];
bool f[200000];

long long dfs(int c, int k, long long ans) {
	long long ff;
	if (k == m)
		return ans;
	for (int i = c; i <= n; i++) {
		if (f[i] == 0) {
			f[i] = 1;
			ff = max(dfs(i, k + 1, f[i] & ans ), ff) ;
			f[i] = 0;
		}
	}
}

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n >= 20 || m == 1 || m == n) {
		sort(a + 1, a + n + 1, cmp);
		cout << a[m];
		return 0;
	}
	cout << dfs(0, 0, pow(2, 30) - 1);
	return 0;
}
