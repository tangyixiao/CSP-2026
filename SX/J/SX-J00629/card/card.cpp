#include <bits/stdc++.h>
using namespace std;
int n, m, x;
int a[200005];
int b[200005];
int c[200005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		b[i] = x;
	}
	for (int i = 1; i <= n; i++) {
		stack <int> q;
		for (int k = i; k <= n; k++) {
			q.push(b[k]);
			a[b[k]]++;
			if (a[b[k]] > 1) {
				q.pop();
				a[b[k]]--;
				while (q.top() != a[b[k]]) {
					int y = q.top();
					q.pop();
					a[y]--;
				}
			}
		}
		for (int j = 1; j <= m; j++) {
			c[j] += a[j];
		}
		memset(a, 0, sizeof(a));
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}