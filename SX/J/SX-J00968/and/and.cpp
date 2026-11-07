#include <bits/stdc++.h>
using namespace std;
int const N = 2e5+10;
long long a[N], n, m, b[N], v[N], ans = 0;
priority_queue<long long>q;

void dfs(int k) {
	if (k == m + 1) {
		long long op = b[1];
		for (int i = 2; i <= k - 1; i++) {
			op = op &b[i];
			if (op == 0)
				break;
		}
		ans = max(ans, op);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] == 0) {
			v[i] = 1;
			b[k] = a[i];
			dfs(k + 1);
			v[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		q.push(a[i]);
	}
	if (n <= 20) {
		dfs(1);
		cout << ans;
	} else if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans;
	} else if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
	} else if (m == 2) {
		long long kl = q.top(), iu = 0;
		q.pop();
		for (int i = 2; i <= n; i++) {
			iu = q.top();
			q.pop();
			ans = max(ans, kl &iu);
		}
		cout << ans;
	} else if (a[1] == 0 && a[n] == n - 1) {
		long long kl = 0;
		ans = q.top();
		q.pop();
		for (int i = 2; i <= m; i++) {
			kl = q.top();
			q.pop();
			ans = ans &kl;
		}
		cout << ans;
	} else {
		long long kl = 0;
		ans = q.top();
		q.pop();
		for (int i = 2; i <= m; i++) {
			kl = q.top();
			q.pop();
			ans = ans &kl;
		}
		cout << ans;
	}
	return 0;
}