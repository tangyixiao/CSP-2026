#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, a[100005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	int b[100005]
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] == a[i];
	}
	sort(b + 1, b + n + 1);
	for (int i = 1; i <= n; i++) {
		if (b[i] == a[i]) {
			cout << n;
		}
	}
	return 0;
}
