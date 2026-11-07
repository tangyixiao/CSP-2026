#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long s = 0;
	for (int i = 1; i <= n - m + 1; i++) {
		long long ma = a[i];
		for (int j = i + 1; j <= i + m - 1; j++) {
			ma = ma &a[j];
		}
		s = max(s, ma);
	}
	cout << s;
	return 0;
}