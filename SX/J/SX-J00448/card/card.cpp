#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], t[300005], cnt[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (t[a[i]] == 0)
			t[a[i]] = 1;
		else {
			t[a[i]] = 0;
			continue;
		}
	}
	for (int i = m; i >= 1; i--) {
		if (t[i] != 0)
			cnt[i]++;
	}
	for (int i = 1; i <= m; i++) {
		if (cnt[i] != 0)
			cout << cnt[i] << " ";
	}
	return 0;
}
