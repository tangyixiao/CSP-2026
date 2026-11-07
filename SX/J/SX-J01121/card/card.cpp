#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 5e5+10;
ll n, m, a[N], b[N], c[N], k;
deque<ll> q, p;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(b, 0, sizeof(b));
		for (int j = i; j <= n; i++) {
			if (b[a[i]] != 0) {
				while (q.back() != a[i]) {
					q.pop_back();
				}
				q.pop_back();
			}
			q.push_front(a[i]);
			b[a[i]] = q.size();
		}
		c[q.size()]++;
		q = p;
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}