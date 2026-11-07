#include <bits/stdc++.h>
using namespace std;

int n, m, a[10000010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int max = -1;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int yu = (a[i] & a[j]);
			if (yu > max) {
				max = yu;
			}
		}
	}
	cout << max;
	return 0;
}