#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	a[n + 1] = 99999999;
	for (int i = 1; i <= n; i++) {
		if (a[i + 1] != a[i]) {
			cout << i << " ";
		}
	}
	return 0;
}
