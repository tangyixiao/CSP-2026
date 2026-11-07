#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], p[300005], l[300005];
stack<int>q;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int b[300005];
		for (int j = 1; j <= 300005; j++)
			b[j] = 0;
		for (int j = i; j <= n; j++) {
			b[a[j]]++;
			q.push(a[j]);
			if (b[a[j]] % 2 == 0 and b[a[j]] != 0) {
				b[a[j]] = 1;
				q.pop();
				while (q.top() != a[j]) {
					q.pop();
				}
			}
		}
		while (!q.empty()) {
			l[q.top()]++;
			q.pop();
		}
		cout << endl;
	}
	for (int i = 1; i <= m; i++) {
		cout << l[i] << " ";
	}
	return 0;
}
