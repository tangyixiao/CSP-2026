#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2 * 1e5 + 10;
int n, m;
int asum = -1e9;
int a[MAXN];
vector<int> ans;
int vis[MAXN];

void dfs(int now) {
	if (ans.size() == m) {
		int sum = ans[0];
//		cout << ans[0] << endl << endl;
		for (int i = 1; i < m; i++) {
			sum &= ans[i];
//			cout << ans[i] << " " << sum << endl;
		}
		if (sum >= asum)
			asum = sum;
//		cout << asum << endl << endl;
	}
	for (int i = now; i < n; i++) {
		if (!vis[i]) {
			ans.push_back(a[i]);
			vis[i]++;
			dfs(now + 1);
			ans.pop_back();
			vis[i]--;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	dfs(0);
	cout << asum;
	return 0;
}
//20pts