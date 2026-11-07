#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200009];
long long ans = 0;
bool b[200009];
map<pair<long long, long long>, int>bo;

void dfs(int w, long long cnt) {
	if (w == m) {
		ans = max(ans, cnt);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (bo[ {cnt, a[i]}]) {
			continue;
		}
		if (!b[i]) {
			b[i] = 1;
			bo[ {cnt, a[i]}] = 1;
			long long num = a[i];
			dfs(w + 1, (cnt &num));
			b[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("ans.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, greater<int>());
	for (int i = 1; i <= n; i++) {
		b[i] = 1;
		dfs(1, a[i]);
		b[i] = 0;
	}
	cout << ans;
	return 0;
}