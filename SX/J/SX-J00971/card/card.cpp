#include <bits/stdc++.h>
using namespace std;
int a[500010], ans[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		map<int, int> x;
		for (int j = i ; j <= n; j++) {
			if (x[a[j]] == 1) {
				x.clear();
			}
			x[a[j]] = 1;
		}
		for (auto it = x.begin(); it != x.end(); it++) {
			long long k = it->first;
			cout << k << ' ';
			ans[k]++;
		}
		cout << "\n";
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
