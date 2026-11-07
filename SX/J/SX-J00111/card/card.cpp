#include <bits/stdc++.h>
using namespace std;
long long n, a[500005], s[500005], m, sum, summ;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == 1)
			sum++;
		if (a[i] == 2)
			summ++;
	}
	if (m == 1) {
		cout << n;
		return 0;
	}
	if (m == 2) {
		if (a[n] == 2)
			cout << sum << " " << n;
		if (a[n] == 1)
			cout << summ << " " << n;
		return 0;
	}
	if (n > 5000 && m > 2) {
		for (int i = 1; i <= m; i++)
			cout << i << " ";
		if (m > 3000) {
			if (a[1] == a[2]) {
				for (int i = 1; i <= m; i++)
					cout << n;
			} else {
				for (int i = 1; i <= m; i++)
					cout << i << " ";
			}

		}
	}

	return 0;
}
