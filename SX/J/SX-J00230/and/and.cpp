#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 +5;
int n, m;
int a[N];

int awy(int x, int y) {
	int m[1100] = {}, n[1100] = {}, ct1 = 1, ct2 = 1;
	while (x > 0) {
		m[ct1] = x % 2;
		ct1++;
		x /= 2;
	}
	ct1 = 1;
	while (y > 0) {
		n[ct2] = y % 2;
		ct2++;
		y /= 2;
	}
	int ma = max(ct1 - 1, ct2 - 1), ans = 0;
	for (int i = 1; i <= ma; i++) {
		if (m[i] == n[i] && m[i] == 1) {
			ans += int(pow(2, i - 1));
		}
	}
	return ans;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			ans = max(awy(a[i], a[j]), ans);
		}
	}
	cout << ans;
	return 0;
}
