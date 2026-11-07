#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	bool isc = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> c[i];
		if (i != 0 && c[i] != c[i - 1])
			isc = 0;
	}
	if (isc == 1) {
		cout << 0;
		return 0;
	}
	int i = 0;
	int j = n - 1;
	int t = a[0];
	int w = a[n - 1];
	long long ans = 0;
	while (i < j) {
		if (c[i] == c[j]) {
			if (t >= w) {
				t = t - w;
				w = 0;
			} else {
				w = w - t;
				t = 0;
			}
		} else {
			if (t >= w) {
				t = t - w;
				ans += w;
				w = 0;
			} else {
				w = w - t;
				ans += t;
				t = 0;
			}
		}
		if (t == 0) {
			i++;
			t = a[i];
		}
		if (w == 0) {
			j--;
			w = a[j];
		}
	}
	cout << ans;
	return 0;
}
