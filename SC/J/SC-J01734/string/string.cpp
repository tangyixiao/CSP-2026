#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s;
int n;
ll a[1000010], m, ans;
char c[1000010];
int main () {
	freopen ("string.in", "r", stdin);
    freopen ("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		m += a[i];
	}
	ll l = 0, r = 0, i = 1, j = n, mid = (m + 1) / 2;
	l += a[1], r += a[n];
	while (i < j) {
		if (l >= mid) {
			if (m % 2 == 1) a[i]--;
			a[i] -= (l - mid) * 2;
			//cout << "a";
		}
		else if (r >= mid) {
			if (m % 2 == 1) a[j]--;
			a[j] -= (r - mid) * 2;
			//cout << "b";
		}
		//for (int k = 1; k <= n; k++) cout << a[k] << " ";
		//cout << "\n";
		if (a[i] == a[j]) {
			if (c[i] != c[j]) ans += a[i];
			a[i] = a[j] = 0;
			i++, j--;
			l += a[i];
			r += a[j];
		}
		else if (a[i] > a[j]) {
			if (c[i] != c[j]) ans += a[j];
			a[i] -= a[j];
			a[j] = 0;
			j--;
			r += a[j];
		}
		else if (a[i] < a[j]) {
			if (c[i] != c[j]) ans += a[i];
			a[j] -= a[i];
			a[i] = 0;
			i++;
			l += a[i];
		}
		//cout << i << " " << j << " " << ans << "\n\n";
	}
	for (int i = 1; i <= n; i++) ans += a[i];
	cout << ans;
	return 0;
}