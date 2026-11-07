#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005], cnt = 0;

bool cmp(long long x, long long y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	if (a[1] == pow(2, n)) {
		for (int i = 1; i <= m; i++) {
			cnt += a[i];
		}
		cout << cnt;
	}
	if (m == 2) {
		for (int i = 1; i < n - 1; i++) {
			if (a[i] == a[i + 1]) {
				cout << a[i];
				return 0;
			}
		}
		cout << a[2];
	}
	if (m == 1) {
		cout << a[1];
	}
	if (a[1] == pow(2, n) - 1) {
		cout << a[m];
	} else {
		cout << 0;
	}
	return 0;
}