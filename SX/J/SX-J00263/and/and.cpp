#include <bits/stdc++.h>
#define p_q priority_queue
#define int long long
#define endl "\n"
using namespace std;
int n, m, ans;
int num[200005];
int p[200005];

void dfs(int step, int start, int sum) {
	if (step == m + 1) {
		ans = max(ans, sum);
		return ;
	}
	for (int i = start + 1; i <= n; i++) {
		int x;
		if (sum == 0)
			x = num[i];
		else
			x = (sum & num[i]);
		p[step] = num[i];
		dfs(step + 1, i, x);
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> num[i];
	if (n <= 2000)
		dfs(1, 0, 0);
	else {
		sort(num + 1, num + n + 1, greater<int>());
		ans = num[1];
		for (int i = 2; i <= m; i++) {
			ans = (ans &num[i]);
		}
	}
	cout << ans;
	return 0;
}
