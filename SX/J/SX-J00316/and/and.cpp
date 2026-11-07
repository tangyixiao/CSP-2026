#include <bits/stdc++.h>

using namespace std;

long long n, m, a[200005], l, ma, maa;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	l = a[1], ma = a[1];
	for (int i = 2; i <= n; i++)
		l &= a[i], ma = max(ma, a[i]);
	if (m == n) {
		cout << l;
		return 0;
	}
	if (m == 1) {
		cout << ma;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			maa = max(maa, a[i] & a[j]);
		}
	}
	cout << maa;
	return 0;
}
