#include <bits/stdc++.h>
using namespace std;
int n;
int a[200010];
string b[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	long long l = 1, r = n, ans = 0;
	int lc = 0, rc = 0;
	string ls, rs;
	while (l < r) {
		if (lc == 0) {
			lc = a[l];
			ls = b[l];
		}
		if (rc == 0) {
			rc = a[r];
			rs = b[r];
		}

		int ju;
		if (ls == rs) {
			ju = 0;
		} else {
			ju = 1;
		}
		if (lc >= rc) {
			ans += rc * ju;
			lc -= rc;
			rc = 0;
		} else {
			ans += lc * ju;
			rc -= lc;
			lc = 0;
		}


		if (lc == 0) {
			l++;
		}
		if (rc == 0) {
			r--;
		}
//		cout << l << "  " << r << "  " << lc << "  " << rc << endl;
	}
	cout << ans;
	return 0;
}
