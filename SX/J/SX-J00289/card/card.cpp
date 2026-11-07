#include <bits/stdc++.h>

using namespace std;

int a[500005], ans[300005], t[300005];
bool b;
int x[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	int n, m, i;
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1])
			b = 1;
	}
	ans[n] = n;
	if (b == 0) {
		for (i = 1; i <= n; i++) {
			if (a[i] > a[i - 1])
				ans[a[i - 1]] = i - 1;
		}
		for (i = 1; i <= m; i++)
			cout << ans[i] << " ";
	} else if (m == 1) {
		cout << n;
		return 0;
	} else if (m == 2) {
		for (i = n; i >= 1; i--)
			if (a[i] != a[n]) {
				ans[a[i]] = i;
				break;
			}
		for (i = 1; i <= m; i++)
			cout << ans[i] << " ";
	}

	return 0;
}
