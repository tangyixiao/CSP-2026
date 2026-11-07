#include<iostream>
#include<cstdio>
using namespace std;
#define ll long long
ll read() {
	ll f = 1, res = 0;
	char ch = getchar();
	while (!isdigit(ch)) {
		if (ch == '-') f = -1;
		ch = getchar();
	}
	while (isdigit(ch)) {
		res = res * 10 + ch - '0';
		ch = getchar();
	}
	return f*res;
}
ll n, m, a[200005], ans = -1e9;
void dfs(ll k, ll c, ll s) {
	if (k == n + 1) {
		if (c == m) {
			if (ans < s) ans = s;
		}
		return;
	}
	if (c == m) {
		if (ans < s) ans = s;
		return;
	}
	if (c == 0) dfs(k + 1, c + 1, a[k]);
	else dfs(k + 1, c + 1, s & a[k]);
	dfs(k + 1, c, s);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1, 0, 0);
	cout << ans;
	return 0;
}