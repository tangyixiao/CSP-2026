#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, m, sum = 0, ans = 0;
	string a, b = "";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> a;
		sum += m;
		for (int j = 0; j < m; j++) {
			b += a;
		}
		a = "";
	}
	if (sum % 2 == 0) {
		for (int i = 0; i < sum / 2; i++) {
			if (b[sum / 2 - i - 1] != b[sum / 2 + i]) {
				ans++;
			}

		}
	}
	if (sum % 2 != 0) {
		for (int i = 1; i <= sum / 2; i++) {
			if (b[sum / 2 - i]  != b[sum / 2 + i ]) {
				ans++;
			}

		}
	}
	cout << ans;
	return 0;
}
