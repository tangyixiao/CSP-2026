#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005];
int ans = INT_MIN, cnt = INT_MAX;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "r", stdin);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (ans < a[i]) {
			ans = a[i];
		}
		if (cnt > a[i]) {
			cnt = a[i];
		}
	}
	cout << ans - cnt;
	return 0;
}
