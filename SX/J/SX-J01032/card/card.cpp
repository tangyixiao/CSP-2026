#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], r[300005], j[300005], l[300005], ans[300005];
queue<long long>q;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		r[a[i]] = i;
		ans[a[i]]++;
	}
	for (long long i = 1; i <= m; i++) {
		if (r[i] < n) {
			l[i] = a[r[i] + 1];
			j[a[r[i] + 1]]++;
		}
	}
	for (long long i = 1; i <= m; i++)
		if (j[i] == 0)
			q.push(i);
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		if (!l[u])
			continue;
		int v = l[u];
		j[v]--;
		ans[v] += ans[u];
		if (!j[v])
			q.push(v);
	}
	for (long long i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	return 0;
}