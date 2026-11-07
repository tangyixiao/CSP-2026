#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 50;
typedef long long ll;
ll n, m, ans = LLONG_MIN, a[N], pre, suf[N];
void dfs(ll x, ll cnt, ll sum) {
	if (x > n && cnt < m) return;
	if (cnt == m) {
		ans = max(ans, sum);
		return;
	}
	dfs(x + 1, cnt + 1, sum & a[x]), dfs(x + 1, cnt, sum);
}
bool flagA = 1, iv = 0, is;
bool cmp(ll a, ll b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		iv = 0;
		for (int j = 1; j <= 22; ++j) if (a[i] == (1 << j) - 1) {
				iv = 1;
				break;
			}
		flagA &= iv;
	}
	is = (flagA || m == n || m == n - 1);
	if (flagA) sort(a + 1, a + 1 + n, cmp), cout << a[m];
	else if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; ++i) ans &= a[i];
		cout << ans;
	} else if (m == n - 1) {
		pre = suf[n + 1] = LLONG_MAX;
		for (int i = n; i >= 1; --i) suf[i] = suf[i + 1] & a[i];
		for (int i = 1; i <= n; ++i) pre &= a[i], ans = max(ans, pre & suf[i + 1]);
		cout << ans;
	}
	if (is) return 0;
	dfs(1, 0, LLONG_MAX);
	cout << ans;
	return 0;
}