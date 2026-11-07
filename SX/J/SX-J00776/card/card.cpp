#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans[200005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == a[i - 1]) {
			ans[i - 1] = 0;
		} else {
			ans[i - 1] = i - 1;
		}
	}
	ans[n] = n;
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
