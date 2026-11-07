#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, a[N], ans1;

bool cmp(long long x, long long y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == n) {
		ans1 = a[1];
		for (int i = 2; i <= n; i++) {
			ans1 = ans1 &a[i];
		}
		cout << ans1;
		return 0;
	}
	if (m == 1) {
		sort(a + 1, a + n + 1, cmp);
		cout << a[1];
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n - m + 1; j++) {
			long long temp = a[i];
			for (int k = j; k <= j + m - 1; k++) {
				temp = temp &a[k];
			}
			cout << temp;
			ans1 = max(ans1, temp);
		}
	}
	cout << ans1;
	return 0;
}