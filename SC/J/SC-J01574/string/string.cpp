#include<bits/stdc++.h>
using namespace std;
int n;
long long m, a[200005], cnt, ans;
char s[200005];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		m += a[i];
	}
	int l = 1, r = n;
	while ((cnt + a[l] <= m / 2) && (cnt + a[r] <= m / 2)) {
		if (a[l] > a[r]) {
			if (s[l] != s[r]) {
				ans += a[r];
			}
			cnt += a[r];
			a[l] -= a[r];
			a[r] = 0;
		}
		else {
			if (s[l] != s[r]) {
				ans += a[l];
			}
			cnt += a[l];
			a[r] -= a[l];
			a[l] = 0;
		}
		if (a[l] > a[r]) {
			r--;
		}
		else if (a[l] < a[r]) {
			l++;
		}
		else {
			l++;
			r--;
		}
	}
	if (cnt == m / 2) {
		cout << ans;
		return 0;
	}
	if (cnt + a[l] > m / 2) {
		while (l != r) {
			if (s[l] != s[r]) {
				ans += a[r];
			}
			r--;
		}
	}
	else if (cnt + a[r] > m / 2) {
		while (l != r) {
			if (s[l] != s[r]) {
				ans += a[l];
			}
			l++;
		}
	}
	cout << ans;
	return 0;
}