#include <bits/stdc++.h>
using namespace std;
long long n, a[200010], k, t11, t22, f;
char b[200010], s[200010], t1[10010], t2[10010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (int j = 1; j <= a[i]; j++) {
			k++;
			s[k] = b[i];
		}
	}
	if (k % 2 == 0) {
		for (int i = 1; i <= k / 2; i++) {
			t11++;
			t1[t11] = s[i];
		}
		for (int i = k / 2 + 1; i <= k; i++) {
			t22++;
			t2[t22] = s[i];
		}
		f = 0;
		for (int i = 1; i <= k / 2; i++) {
			if (t1[i] != t2[i]) {
				f++;
			}
		}
	} else {
		for (int i = 1; i <= k / 2; i++) {
			t11++;
			t1[t11] = s[i];
		}
		for (int i = k / 2 + 2; i <= k; i++) {
			t22++;
			t2[t22] = s[i];
		}
		f = 0;
		for (int i = 1; i <= k / 2; i++) {
			if (t1[i] != t2[i]) {
				f++;
			}
		}
	}
	cout << f;
	return 0;
}
