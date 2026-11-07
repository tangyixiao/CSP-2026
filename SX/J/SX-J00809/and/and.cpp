#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, ans = INT_MIN;
const int N = 1e5+10;
ll a[N];
ll r[N];
ll cnt = 1;

ll fun() {
	ll cnt = a[r[1]];
	for (int i = 2; i <= m; i++) {
		cnt = cnt &a[r[i]];
	}
	return cnt;
}

void dfs(ll cnt, ll k) {
	for (int i = cnt; i <= n; i++) {
		r[k] = i;
		if (k == m) {
			ans = max(ans, fun());
		} else {
			dfs(i + 1, k + 1);
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	bool isA = true, isB = false;
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		cnt = cnt * 2;
		if (a[i] != cnt - 1) {
			isA = false;
		}
		if (a[i] + 1 != i) {
			isB = false;
		}
	}
	if (n <= 2000) {
		dfs(1, 1);
		cout << ans;
	} else if (isA) {
		cout << a[n - m + 1];
	} else if (isB) {
		cout << a[n - m + 1];
	}
	return 0;
}

