#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5+10;
int n;
int a[maxn];
char c[maxn];
long long len = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		len += a[i];
	}
	int l = 1, r = n;
	long long ans = 0;
	while (l <= r) {
		if (l == r) {
			cout << ans << " ";
			ans += a[l];
			cout << ans << " ";
			break;
		} else {
			if (a[l] < a[r]) {
				if (c[l] == c[r])
					ans += a[l] * 2;
				a[r] -= a[l];
				l++;
			} else if (a[l] > a[r]) {
				if (c[l] == c[r])
					ans += a[r] * 2;
				a[l] -= a[r];
				r--;
			} else {
				if (c[l] == c[r])
					ans += a[l] * 2;
				l++, r--;
			}
		}
	}
	cout << (len - ans) / 2;
	return 0;
}