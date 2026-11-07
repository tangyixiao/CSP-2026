#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], b[20005][20005], mm, ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mm = max(mm, a[i]);
		b[1][i] = mm;
	}
	if (m == 1) {
		cout << mm;
		return 0;
	}
	if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = (ans &a[1]);
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n - 1; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[j] & a[i]);
			}

		}
		cout << ans;
		return 0;
	}

	for (int i = 2; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < i) {
				b[i][j] = b[i - 1][j];
			} else if (j == i) {
				b[i][j] = b[j - 1][j - 1] & a[j];
			} else {
				b[i][j] = max(b[i][j - 1], b[i - 1][j - 1] & a[j]);
			}

			//cout << b[i][j] << ' ';
		}
		//cout << endl;
	}
	cout << b[m][n];
	return 0;
}
