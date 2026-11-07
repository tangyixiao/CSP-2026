#include <bits/stdc++.h>
using namespace std;

int n, m, ans = -1, anding[200005];

bool check1() {
	for (int i = 1;i <= n;i ++) {
		int f = 0;
		for (int k = 0;k <= 20;k ++) {
			if (anding[i] == pow(2, k) - 1) {
				f = 1;
			}
		}
		if (f == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) {
		cin >> anding[i];
	}
	if (m == 1) {
		for (int i = 1;i <= n;i ++) {
			ans = max(ans, anding[i]);
		}
		cout << ans;
		return 0;
	}
	else if (m == n - 1) {
		for (int i = 1;i <= n;i ++) {
			int s = 0;
			if (i == 1) {
				s = anding[2];
			}
			else s = anding[1];
			for (int j = 1;j <= n;j ++) {
				if (j == i) {
					s = s & anding[j + 1];
				}
				else {
					s = s & anding[j];
				}
			}
			ans = max(ans, s);
		}
		cout << ans;
		return 0;
	}
	else if (m == n) {
		ans = anding[1];
		for (int i = 2;i <= n;i ++) {
			ans = ans & anding[i]; 
		}
		cout << ans;
		return 0;
	}
	else if (m == 2) {
		for (int i = 1;i <= n;i ++) {
			for (int j = 1;j <= n;j ++) {
				if (i == j) {
					continue;
				} else {
					ans = max(ans, anding[i] & anding[j]);
				}
			}
		}
		cout << ans;
		return 0;
	}
	else if (check1()) {
		sort(anding + 1, anding + n + 1);
		cout << anding[n - m + 1];
		return 0;
	}
	else {
		for (int i = 1;i <= m;i ++) {
			for (int j = 1;j <= n - i;j ++) {
				anding[j] = anding[j] & anding[j + 1];
			}
		}
		for (int i = 1;i <= n - m + 1;i ++) {
			ans = max(ans, anding[i]);
		}
		cout << ans;
		return 0;
	}
	return 0;
}