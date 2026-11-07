#include <bits/stdc++.h>
using namespace std;
long long a[200010], n, ans;
char s[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> s[i];
	}
	long long j = n - 1, i = 0, l = 0;
	while (i <= j) {
		if (a[i] == a[j]) {
			if (s[i] != s[j])
				ans += a[i];
			i++;
			j--;
			continue;
		}
		if (a[i] > a[j]) {
			l = a[i] - a[j];
			if (s[i] != s[j])
				ans += a[j];
			j--;
			while (l > a[j] && i < j) {
				if (s[i] != s[j])
					ans += a[j];
				l -= a[j];
				j--;
			}
			if (i == j) {
				cout << ans;
				return 0;
			}

			if (s[i] != s[j])
				ans += l;
			a[j] -= l;
			i++;
		}
		if (a[i] < a[j]) {
			l = a[j] - a[i];
			if (s[i] != s[j])
				ans += a[i];
			i++;
			while (l > a[i] && i < j) {
				if (s[i] != s[j])
					ans += a[i];
				l -= a[i];
				i++;
			}
			if (i == j) {
				cout << ans;
				return 0;
			}

			if (s[i] != s[j])
				ans += l;
			a[i] -= l;
			j--;
		}

	}
	cout << ans;
	return 0;
}
