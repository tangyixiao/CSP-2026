#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
long long n, m, a[N], b[N], c[N];
queue<long long> q;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			b[j] = 0;
		}
		for (int j = i; j <= n; j++) {
			q.push(a[j]);
			b[a[j]]++;
			if (b[a[j]] == 2) {
				q.pop();
				while (!q.empty() && q.front() != a[j]) {
					q.pop();
				}
			}
		}
		for (int j = 1; j <= n; j++) {
			while (!q.empty()) {
				c[q.front()]++;
				q.pop();
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
