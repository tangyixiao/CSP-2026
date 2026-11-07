#include <bits/stdc++.h>
using namespace std;
long long a[500001], ans[300001];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		cout << n;
		return 0;
	}
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i + 1])
			ans[a[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		ans[i] += ans[i - 1] + 1;
		cout << ans[i] << " ";
	}
	return 0;
}
