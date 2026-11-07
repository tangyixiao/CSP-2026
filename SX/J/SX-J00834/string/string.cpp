#include <bits/stdc++.h>
using namespace std;
int n, a[100000], mmax = INT_MIN, t;
string c[100000], sum, r;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++) {
			sum = sum + c[i];
		}
	}
	for (int i = 1; i <= sum.size(); i++) {
		r += sum[i];
		if (c[i] == c[i + 1])
			t = 1;
		else {
			t = 0;
			break;
		}
	}
	if (r == sum) {
		cout << 0;
	} else if (t == 1) {
		cout << 0;
	} else {
		for (int i = 1; i <= n; i++) {
			mmax = max(mmax, a[i]);
		}
		cout << mmax;
	}
	return 0;
}
