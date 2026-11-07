#include <bits/stdc++.h>
using namespace std;
long long ans[300005];
long long c[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	queue<long long> q;
	for (long long i = 1; i <= n; i++) {
		long long a;
		cin >> a;
		q.push(a);
	}
	for (long long i = 1; i <= n; i++) {
		queue<long long> p;
		for (long long j = 1; j <= i - 1; j++) {
			long long a;
			a = q.front();
			q.pop();
			q.push(a);
		}
		for (long long j = 1; j <= n - i + 1; j++) {
			long long a = q.front();
			for (long long l = 1; l <= j; l++) {
				if (a == c[l]) {
					for (long long o = 1; !p.empty(); o++) {
						p.pop();
						c[o] = 0;
					}
					break;
				}
			}
			p.push(a);
			c[j] = a;
			q.pop();
			q.push(a);
		}
		while (!p.empty()) {
			long long a;
			a = p.front();
			ans[a]++;
			p.pop();
		}
	}
	for (long long i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}