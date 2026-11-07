#include <cstdio>
#include <iostream>
#include <algorithm> 

using namespace std;

int ns[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> ns[i];
	}
	if (m == 1) {
		int max = -1;
		for (int i = 1; i <=n; ++i) {
			if (ns[i] > max) max = ns[i];
		}
		cout << max << endl;
		return 0;
	}
	if (m == n) {
		int ans = ns[1];
		for (int i = 1; i <= n; ++i) {
			ans = ans & ns[i];
		}
		cout << ans << endl;
		return 0;
	}
	if (m == 2) {
		int ansm = -1;
		for (int i = 1; i <= n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				if (j==i) continue;
				int ans = ns[j] & ns[i];
				if (ans > ansm) ansm = ans;
			}
		}
		cout << ansm << endl;
		return 0;
	}
	if (m == n - 1) {
		int ansm = -1;
		for (int i = 1; i <= n; ++i) {
			int ans;
			if (i == 1) ans = ns[2];
			else ans = ns[1];
			for (int j = 1; j <= n; ++j) {
				if (i == j) continue;
				ans = ans & ns[j];
			}
			if (ans > ansm) ansm = ans;
		}
		cout << ansm << endl;
		return 0;
	}
	sort(ns + 1, ns + n + 1);
	int ans = ns[n];
	for (int i = 1; i <= m; ++i) {
		ans = ans & ns[n - i + 1];
	}
	cout << ans << endl;
	return 0;
}
