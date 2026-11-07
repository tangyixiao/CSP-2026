#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
int n, m, cnt[200020];
ll a[200020], p[200020], q[200020];
bool flag[200020];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	if (m == 1) {
		ll maxn = 0;
		for (int i = 1; i <= n; i ++)
			maxn = max(maxn, a[i]);
		cout << maxn;
		return 0;
	}
	if (m == n) {
		ll x = a[1];
		for (int i = 2; i <= n; i ++)
			x &= a[i];
		cout << x;
		return 0;
	}
	if (m == 2 && n <= 2000) {
		ll maxn = 0;
		for (int i = 1; i <= n; i ++) {
			for (int j = i + 1; j <= n; j ++)
				maxn = max(maxn, (a[i] & a[j]));
		}
		cout << maxn;
		return 0;
	}
	if (m == n - 1) {
		p[1] = a[1];
		for (int i = 2; i <= n; i ++)
			p[i] = p[i - 1] & a[i];
		q[n] = a[n];
		for (int i = n - 1; i; i --)
			q[i] = q[i + 1] & a[i];
		ll maxn = max(p[n - 1], q[2]);
		for (int i = 2; i < n; i ++)
			maxn = max(maxn, p[i - 1] & q[i + 1]);
		cout << maxn;
		return 0;
	}
	ll answer = 0;
	for (int j = 31; j + 1; j --) {
		int cnt = 0;
		for (int i = 1; i <= n; i ++) {
			if (! flag[i])
				cnt += ((a[i] >> j) & 1);
		}
		if (cnt >= m) {
			answer += (1LL << j);
			for (int i = 1; i <= n; i ++) {
				if (! ((a[i] >> j) & 1))
					flag[i] = 1;
			}
		}
	}
	cout << answer;
}
