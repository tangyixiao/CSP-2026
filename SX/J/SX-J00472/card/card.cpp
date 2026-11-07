#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], v[300005], v1[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	int t = m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (m--) {
		for (int i = t + 1 - m; i <= n; i++) {
			v[a[i]]++;
			if (v[a[i]] > 1) {
				for (int j = 1; j <= i - 1; j++) {
					a[j] = 0;
					v[a[j]]--;
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			if (v[i] != 0) {
				v1[i]++;
			}
			v[i] = 0;
		}
	}
	for (int i = 1; i <= t; i++) {
		cout << v1[i] << " ";
	}

	return 0;
}
