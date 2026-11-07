#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stfout);
	int n, m, maxx = -100005, x = 0, a[10005];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 2; i <= n; i++) {
		if (a[i - 1] == a[i]) {
			x = a[i];
		}
		if (maxx < x) {
			maxx = x;
		}
	}
	cout << maxx;
	return 0;
}