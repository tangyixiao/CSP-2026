#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, ans = 0;
int a[200005] = {};
char c[200005] = {};

void solve() {
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i] >> c[i];

//	for(int i = 0; i < n; ++i) cout << a[i] << ' ' << c[i] << " \n"[i == n - 1];

	int l = 0, r = n - 1;
	while (l <= r) {
		int step = min(a[l], a[r]);

//		cout << "\n";
//		cout << "l == " << l << "\n";
//		cout << "r == " << r << "\n";
//		cout << "a[l] == " << a[l] << "\n";
//		cout << "a[r] == " << a[r] << "\n";
//		cout << "step == " << step << "\n";

		if (c[l] != c[r]) {
			ans += step;
		}

		a[l] -= step, a[r] -= step;

		if (a[l] == a[r])
			l++, r--;
		else if (a[l] > a[r])
			r--;
		else if (a[l] < a[r])
			l++;
	}

	cout << ans;
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	solve();
}