#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
int n, m;
int a[maxn], ans = 0, s[35];

void dfs(int x, int t, int sum) {
	if (t == m) {
		ans = max(ans, sum);
		return;
	}
	if (x > n)
		return;
	dfs(x + 1, t, sum);
	dfs(x + 1, t + 1, sum &a[x]);
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	bool flag = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] != i - 1)
			flag = 0;
	}
	if (n <= 20) {
		dfs(1, 0, 0);
		cout << ans;
	} else if (m == n) {
		for (int i = 1; i <= n; i++)
			ans &= a[i];
		cout << ans;
	} else if (m == 1) {
		for (int i = 1; i <= n; i++)
			ans = max(a[i], ans);
		cout << ans;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
	} else if (m == n - 1) {
		for (int i = 1; i <= n; i++) {
			int sum = 0;
			for (int j = 1;j <= n; j++)
				if(j!=i) sum &= a[j];
			ans = max(ans, sum);
		}
		cout << ans;
	} else {
		if (flag) {
			int t = 0;
			while (n != 0) {
				t++;
				n /= 2;
			}
			if (m <= t)
				cout << pow(2, t + 1) - 1;
			else
				cout << 0;
		} else {
			for (int i = 1; i <= n; i++)
				ans = max(a[i], ans);
			cout << ans;
		}
	}
	return 0;
}