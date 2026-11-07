#include <bits/stdc++.h>
using namespace std;
long long n, a, ans;
long long cs[200005];
char c, s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		cs[i] = a;
		s[i] = c;
	}
	int i = 1, j = n;
	while (i != j && i < j) {
		if (cs[i] == 0) {
			i++;
		}
		if (cs[j] == 0) {
			j--;
		}
		if (i == j) {
			break;
		}
		long long zx = 0;
		if (cs[i] <= cs[j]) {
			zx = cs[i];
		} else {
			zx = cs[j];
		}
		if (s[i] != s[j]) {
			ans += zx;
		}
		cs[i] -= zx;
		cs[j] -= zx;
	}
	cout << ans;
	return 0;
}
