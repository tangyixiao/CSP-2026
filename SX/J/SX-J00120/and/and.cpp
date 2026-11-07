#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, maxx = LLONG_MIN;
int a[N], b[N];
bool v[N];

void dfs(long long k, long long sum) {
	if (k == m + 1) {
		if (sum > maxx) {
			maxx = sum;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] == 0) {
			v[i] = 1;
			b[k] = a[i];
			if (k == 1)
				dfs(k + 1, a[i]);
			dfs(k + 1, sum &a[i]);
			v[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1, 0);
	cout << maxx;
	return 0;
}
