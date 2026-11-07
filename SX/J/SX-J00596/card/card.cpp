#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	freopen("card.in", "r", stdin);
	freopen("card.out", "r", stdout);
	cin >> n >> m;
	int a[n + 10], b[n + 10], vis[m + 10], cs[m + 10];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int t = 1;
		for (int j = 1; j <= sizeof(b); j++) {
			b[j] = 0;
		}
		for (int j = i; j < n; j++) {
			if (!vis[a[j]]) {
				b[t] = a[j];
				vis[a[j]] = t;
			} else {
				for (int x1 = vis[a[j]]; x1 <= sizeof(b); x1++) {
					b[x1] = 0;
				}
				t = vis[a[j]];
				b[t] = a[j];
			}
		}
		for (int j = 1; j <= sizeof(b); j++) {
			cs[b[j]]++;
		}
	}
	for (int i = 0; i < m; i++) {
		if (cs[i]) {
			cout << cs[i] << ' ';
		}
	}
	cout << endl;
	return 0;
}