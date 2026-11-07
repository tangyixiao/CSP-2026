#include <bits/stdc++.h>
using namespace std;
long long a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	long long ans = a[n], num = 0;
	for (int i = n; i >= 1; i--) {
		ans &= a[i];
		num++;
		if (num == m) {
			break;
		}
	}
	cout << ans;
	return 0;
}