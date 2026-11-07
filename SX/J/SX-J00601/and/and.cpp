#include <bits/stdc++.h>
using namespace std;
int n, m, num;
int a[2000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int s = 0;
		for (int i = 1; i <= n; i++) {
			s = max(s, a[i]);
		}
		num = s;
	} else if (m == n) {
		int s = a[1];
		for (int i = 2; i <= n; i++) {
			s &= a[i];
		}
		num = s;
	}
	cout << num;
	return 0;
}
