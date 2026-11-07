#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000010], ans[1000010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ans[i] = m &a[i];
	}
	int maxa = -1;
	for (int i = 1; i <= n; i++) {
		maxa = max(maxa, ans[i]);
	}
	cout << maxa;
	return 0;
}
