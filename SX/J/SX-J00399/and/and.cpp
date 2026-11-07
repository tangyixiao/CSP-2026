#include <bits/stdc++.h>
using namespace std;
int n, m, a[300005], ans = 0, maxx = 0;
bool vis[300005];

void dfs(int step, int sum) {
	if (step == m + 1) {
		ans = max(ans, sum);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			vis[i] = 1;
			dfs(step + 1, sum &a[i]);
			vis[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	bool flag = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
		if (a[i] >= 4) {
			flag = 0;
		}
	}
	if (m == 1 && n > 20) {
		cout << maxx << endl;
		return 0;
	} else if (m == n && n <= 2000 && n > 20) {
		int num = a[1];
		for (int i = 2; i <= n; i++) {
			num = num &a[i];
		}
		cout << num << endl;
		return 0;
	} else if (m == 2 && n <= 2000) {
		int tot = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				tot = max(tot, a[i] & a[j]);
			}
		}
		cout << tot << endl;
		return 0;
	} else if (flag) {
		int cnt1 = 0, cnt2 = 0, sum = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] == 1) {
				cnt1++;
			} else if (a[i] == 2) {
				cnt2++;
			} else {
				cnt1++, cnt2++;
			}
		}
		if (cnt1 >= m) {
			sum++;
		}
		if (cnt2 >= m) {
			sum += 2;
		}
		cout << sum << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		dfs(1, a[i]);
	}
	cout << ans << endl;
	return 0;
}