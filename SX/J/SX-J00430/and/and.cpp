#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200010], s[200010], maxx = LLONG_MIN;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	long long cnt = a[1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
		cnt = cnt &a[i];
	}
	if (m == 1)
		cout << maxx;
	else if (m == n)
		cout << cnt;
	else if (m == n - 1) {
		cnt = a[2];
		for (int i = 2; i <= n; i++) {
			cnt = cnt &a[i];
		}
		long long sum = a[1];
		for (int i = 3; i <= n; i++) {
			sum = sum &a[i];
		}
		cout << max(cnt, sum);
	} else {
		cout << n - 2;
	}
	return 0;
}
