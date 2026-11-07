#include <bits/stdc++.h>
using namespace std;
int a[900001], b[600001], c[500001];
map<int, bool> mp;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		int k = 1, sum = 0;
		for (int j = i; j <= n; j++, k++) {
			b[k] = a[j];
			if (mp[a[j]] == true) {
				k = 1;
				b[k] = a[j];
			}
			mp[a[j]] = true;
		}
		for (int j = 1; j <= k - 1; j++) {
			c[b[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i];
	}
	return 0;
}
