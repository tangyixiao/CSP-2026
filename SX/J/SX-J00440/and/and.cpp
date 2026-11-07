#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5;
int n, m, a[N], maxx;
bool f[N];

int dfs(int t, int sum) {
	if (t == m + 1) {
		maxx = max(maxx, sum);
	}
	for (int i = 1; i <= n; i++) {
		if (f[i])
			continue;
		f[i] = 1;
		if(sum==-1) dfs(t + 1, a[i]);
		else dfs(t + 1, sum&a[i]);
		f[i] = 0;
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1, -1);
	cout << maxx;
	return 0;
}