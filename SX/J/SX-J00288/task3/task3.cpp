#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[2000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdin);
	cin >> n >> m;
	int ans = 1, maxn = -1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			ans = a[i] & a[i + 1];
		}
		maxn = max(maxn, ans);
	}
	cout << maxn;
	return 0;

}
