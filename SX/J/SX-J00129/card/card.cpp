#include <bits/stdc++.h>
using namespace std;

int a[500005], ans[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	queue<int> q;
	for (int j = 1; j <= n; j++) {
		q.push(a[j]);
		for (int i = j + 1; i <= n; i++) {
			if (q.front() == a[i]) {
				while (!q.empty()) {
					q.pop();
				}
				q.push(a[i]);
			} else
				q.push(a[i]);
		}
		while (!q.empty()) {
			ans[q.front()]++;
			if (ans[q.front()] > n)
				ans[q.front()] = n;
			q.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
