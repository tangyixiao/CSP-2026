#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
char c[200005];
string s1, s2;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, o, ans = 0, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cin >> c[i];
		sum += a[i];
		if (sum >= 1e9)
			o = 1;
		else
			o = 0;
	}
	if (o == 0) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= a[i]; j++) {
				s1 += c[i];
			}
		}
		for (int i = n; i >= 1; i--) {
			for (int j = 1; j <= a[i]; j++) {
				s2 += c[i];
			}
		}
		for (int i = 0; i <= n / 2; i++) {
			if (s1[i] != s2[i])
				ans++;
		}
	} else {
		ans = sum / 2;
	}
	cout << ans;
	return 0;
}
