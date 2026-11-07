#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;

	if (n == m) {
		cout << "12" << endl;
		cin >> a[1];
		long long ans = a[1];
		for (int i = 2; i <= n; i++) {
			cin >> a[i];
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		sort(a + 1, a + 1 + n);
		bool v = 0;
		int sum = 0, ans1 = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] != a[i - 1])
				sum = 1;
			else
				sum++;
			if (sum == m) {
				ans1 = a[i];
				v = 1;
				break;
			}
		}
		int ans2 = a[n];
		for (int i = n - 1; i > n - m; i--) {
			ans2 = ans2 &a[i];
		}
		if (v)
			cout << max(ans1, ans2);
		else
			cout << ans2;
	}
}
