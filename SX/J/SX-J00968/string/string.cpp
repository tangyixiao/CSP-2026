#include <bits/stdc++.h>
using namespace std;
long long const N = 1e8+10, M = 2e5+10;
int a[N], b[M], c[M];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, ans = 0, cnt = 0;
	char q;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> b[i] >> q;
		c[i] = q;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= b[i]; j++) {
			cnt++;
			a[cnt] = c[i];
		}
	}
	for (int i = 1; i <= cnt / 2; i++) {
		if (a[i] != a[cnt - i + 1]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}